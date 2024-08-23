#include "mprpcchannel.h"
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <unistd.h>
#include <errno.h>
#include "mprpcapplication.h"
void MprpcChannel::CallMethod(const google::protobuf::MethodDescriptor *method,
                              google::protobuf::RpcController *controller, const google::protobuf::Message *request,
                              google::protobuf::Message *response, google::protobuf::Closure *done)
{
    // 就是把服务名，方法名都发过去
    const google::protobuf::ServiceDescriptor *sd = method->service();
    std::string service_name = sd->name();
    std::string method_name = method->name();

    mprpc::RpcHeader rpcHeader;
    rpcHeader.set_method_name(method_name);
    rpcHeader.set_service_name(service_name);
    uint32_t arg_size = 0;
    std::string arg_str;
    if (!request->SerializeToString(&arg_str))
    {
        std::cout << "serialize request error!" << std::endl;
        return;
    }
    else
    {
        arg_size = arg_str.size();
    }
    rpcHeader.set_args_size(arg_size);

    uint32_t header_size = 0;
    std::string rpc_header_str;
    if (!rpcHeader.SerializeToString(&rpc_header_str))
    {
        std::cout << "serialize rpc header error!";
        return;
    }
    else
    {
        header_size = rpc_header_str.size();
    }

    std::string send_str;
    send_str.insert(0, std::string((char *)&header_size, 4));

    send_str += rpc_header_str;
    send_str += arg_str;

    // 打印调试信息
    std::cout << "==============" << std::endl;
    std::cout << "header_size: " << header_size << std::endl;
    std::cout << "rpc_header_str: " << rpc_header_str << std::endl;
    std::cout << "service_name: " << service_name << std::endl;
    std::cout << "method_name: " << method_name << std::endl;
    std::cout << "args_str: " << arg_str << std::endl;
    std::cout << "send_str: " << send_str << std::endl;
    std::cout << "==============" << std::endl;

    // Tcp编程，完成rpc方法远程调用
    int clientfd = socket(AF_INET, SOCK_STREAM, 0);
    if (-1 == clientfd)
    {
        char errtxt[512] = {0};
        sprintf(errtxt, "create socket error! errno:%d", errno);
        // controller->SetFailed(errtxt);
        return;
    }
    std::string ip = MprpcApplication::GetInstance().GetConfig().Load("rpcserverip");
    uint16_t port = atoi(MprpcApplication::GetInstance().GetConfig().Load("rpcserverport").c_str());
    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(port);
    server_addr.sin_addr.s_addr = inet_addr(ip.c_str());

    if (-1 == connect(clientfd, (struct sockaddr *)&server_addr, sizeof(server_addr)))
    {
        close(clientfd);
        char errtxt[512] = {0};
        sprintf(errtxt, "connect error! errno:%d", errno);
        // controller->SetFailed(errtxt);
        return;
    }

    // 发送rpc请求
    if (-1 == send(clientfd, send_str.c_str(), send_str.size(), 0))
    {
        close(clientfd);
        char errtxt[512] = {0};
        sprintf(errtxt, "send error! errno:%d", errno);
        // controller->SetFailed(errtxt);
        // 这里就不退出了，没必要一个发送失败就退出
        return;
    }

    char recv_buf[1024] = {0};
    int recv_size = 0;
    if (-1 == (recv_size = recv(clientfd, recv_buf, 1024, 0)))
    {
        close(clientfd);
        char errtxt[512] = {0};
        sprintf(errtxt, "recv error! errno:%d", errno);
        // controller->SetFailed(errtxt);

        return;
    }
    if (!response->ParseFromArray(recv_buf, recv_size))
    {
        close(clientfd);
        char errtxt[2048] = {0};
        sprintf(errtxt, "parse error! response_str:%s", recv_buf);
        // controller->SetFailed(errtxt);
        return;
    }
    close(clientfd);
}