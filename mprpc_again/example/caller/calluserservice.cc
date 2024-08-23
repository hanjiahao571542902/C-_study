#include "user.pb.h"
#include "mprpcapplication.h"
#include "mprpcchannel.h"
int main(int argc, char **argv)
{
    MprpcApplication::Init(argc, argv);
    fixbug::LoginRequest req;
    req.set_name("hjh");
    req.set_pwd("123456");

    fixbug::LoginResponse res;
    fixbug::UserServiceRpc_Stub stub(new MprpcChannel());
    stub.Login(nullptr, &req, &res, nullptr);
    // 一次rpc调用完成，读调用的结果
    if (0 == res.result().errcode())
    {
        std::cout << "rpc login response success :" << res.suc() << std::endl;
    }
    else
    {
        std::cout << "rpc login response error :" << res.result().errmsg() << std::endl;
    }
}