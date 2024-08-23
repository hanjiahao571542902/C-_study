#include "rpcprovider.h"

#include "mprpcapplication.h"
// notify就是填表
void RpcProvider::NotifyService(google::protobuf::Service *servcice)
{
    ServiceInfo servcice_info;
    const google::protobuf::ServiceDescriptor *sd = servcice->GetDescriptor();
    std::string service_name = sd->name();
    int methodCnt = sd->method_count();
    for (int i = 0; i < methodCnt; ++i)
    {
        const google::protobuf::MethodDescriptor *md = sd->method(i);
        std::string method_name = md->name();
        servcice_info.m_methodMap.insert({method_name, md});
    }
    servcice_info.m_servcice = servcice;
    m_serviceMap.insert({sd->name(), servcice_info});
}
// 启动rpc服务节点，开始提供rpc远程网络调用函数
void RpcProvider::Run()
{
    std::string ip = MprpcApplication::GetInstance().GetConfig().Load("rpcserverip");
    uint16_t port = atoi(MprpcApplication::GetInstance().GetConfig().Load("rpcserverport").c_str());
    muduo::net::InetAddress address(ip, port);

    // 创建TCPServer对象了
    muduo::net::TcpServer server(&m_eventLoop, address, "RpcProvider");

    server.setConnectionCallback(std::bind(&RpcProvider::OnConnection, this, std::placeholders::_1));
    server.setMessageCallback(std::bind(&RpcProvider::OnMessage, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));

    // 设置muduo的线程数量，自动分发io线程和工作线程
    server.setThreadNum(4);

    server.start();
    m_eventLoop.loop();
}

void RpcProvider::OnMessage(const muduo::net::TcpConnectionPtr &conn, muduo::net::Buffer *buffer, muduo::Timestamp)
{
    std::string recv_buf = buffer->retrieveAllAsString();
    uint32_t header_size = 0;
    recv_buf.copy((char *)&header_size, 4, 0);
    std::string rpc_header = recv_buf.substr(4, header_size);

    mprpc::RpcHeader rpcHeader;
    std::string service_name;
    std::string method_name;
    uint32_t arg_size;
    if (rpcHeader.ParseFromString(rpc_header))
    {
        service_name = rpcHeader.service_name();
        method_name = rpcHeader.method_name();
        arg_size = rpcHeader.args_size();
    }
    else
    {
        // 失败
        std::cout << "rpcheader_str:" << rpc_header << " parse error!" << std::endl;
    }
    std::string arg_str = recv_buf.substr(4 + header_size, arg_size);

    // 打印调试信息
    std::cout << "==============" << std::endl;
    std::cout << "header_size: " << header_size << std::endl;
    std::cout << "rpc_header_str: " << rpc_header << std::endl;
    std::cout << "service_name: " << service_name << std::endl;
    std::cout << "method_name: " << method_name << std::endl;
    std::cout << "args_str: " << arg_str << std::endl;
    std::cout << "==============" << std::endl;

    auto it = m_serviceMap.find(service_name);
    if (it == m_serviceMap.end())
    {
        std::cout << service_name << " is not exist!" << std::endl;
        return;
    }
    auto method_it = it->second.m_methodMap.find(method_name);
    if (method_it == it->second.m_methodMap.end())
    {
        std::cout << service_name << ":" << method_name << " is not exist!" << std::endl;
        return;
    }

    // 都成功了，该调用方法了
    google::protobuf::Service *service = it->second.m_servcice;
    const google::protobuf::MethodDescriptor *method = method_it->second;

    // 生成rpc调用的request和response
    google::protobuf::Message *request = service->GetRequestPrototype(method).New();
    if (!request->ParseFromString(arg_str))
    {
        std::cout << "request parse error! content:" << arg_str << std::endl;
        return;
    }
    google::protobuf::Message *response = service->GetResponsePrototype(method).New();

    google::protobuf::Closure *done = google::protobuf::NewCallback<RpcProvider, const muduo::net::TcpConnectionPtr &, google::protobuf::Message *>(this, &RpcProvider::SendRpcResponse, conn, response);

    // 调用
    service->CallMethod(method, nullptr, request, response, done);
}

void RpcProvider::OnConnection(const muduo::net::TcpConnectionPtr &conn)
{
    if (!conn->connected())
    {
        conn->shutdown();
    }
}
// closure 的done->Run，把结果发给请求方
void RpcProvider::SendRpcResponse(const muduo::net::TcpConnectionPtr &conn, google::protobuf::Message *response)
{
    std::string response_str;
    if (response->SerializeToString(&response_str))
    {
        conn->send(response_str);
    }
    else
    {
        std::cout << "serialize response_str error!" << std::endl;
    }
    conn->shutdown();
}