#include <iostream>
#include "mprpcapplication.h"
#include "user.pb.h"
#include "mprpcchannel.h"

int main(int argc, char **argv)
{
    // 整个程序启动后，想使用mprpc框架来享受rpc服务调用，一定需要先调用框架的初始化函数（只初始化一次
    MprpcApplication::Init(argc, argv);

    // 演示调用远程发布的rpc方法Login
    fixbug::UserServiceRpc_Stub stub(new MprpcChannel());
    // rpc方法的请求参数
    fixbug::LoginRequest request;
    request.set_name("hanhanhan");
    request.set_pwd("147269");
    // rpc方法的相应
    fixbug::LoginResponse response;
    // 发起rpc方法的调用 同步的rpc调用过程 rpcchannel::callmethod
    stub.Login(nullptr, &request, &response, nullptr); // RpcChannel->RpcChannel::callMethod 集中做所有rpc方法调用的参数序列化和网络发送

    // 一次rpc调用完成，读调用的结果
    if (0 == response.result().errcode())
    {
        std::cout << "rpc login response success :" << response.sucess() << std::endl;
    }
    else
    {
        std::cout << "rpc login response error :" << response.result().errmsg() << std::endl;
    }

    // 演示一个register
    fixbug::RegisterRequest req;
    req.set_id(1999);
    req.set_name("hjh");
    req.set_pwd("13579");

    fixbug::RegisterResponse rsp;
    stub.Register(nullptr, &req, &rsp, nullptr);

    // 一次rpc调用完成，读调用的结果
    if (0 == rsp.result().errcode())
    {
        std::cout << "rpc register response success :" << response.sucess() << std::endl;
    }
    else
    {
        std::cout << "rpc login response error :" << response.result().errmsg() << std::endl;
    }

    return 0;
}