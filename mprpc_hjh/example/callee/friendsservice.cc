#include <iostream>
#include <string>
#include "friend.pb.h"
#include "mprpcapplication.h"
#include "rpcprovider.h"
#include <vector>
#include "logger.h"

class FriendService : public fixbug::FriendsService
{
    std::vector<std::string> GetFriendsLists(uint32_t id)
    {
        std::cout << "do local GetFriendsLists ..." << std::endl;
        std::vector<std::string> friends{"hjh", "dzf", "zjc"};
        return friends;
    }
    void GetFriendLists(::google::protobuf::RpcController *controller,
                        const ::fixbug::GetFriendListsRequest *request,
                        ::fixbug::GetFriendListsResponse *response,
                        ::google::protobuf::Closure *done)
    {
        uint32_t id = request->id();

        std::vector<std::string> friends = GetFriendsLists(id);

        fixbug::ResultCode *code = response->mutable_result();
        code->set_errcode(0);
        code->set_errmsg("");
        response->set_sucess(1);
        int size = friends.size();
        for (std::string &name : friends)
        {
            std::string *p = response->add_friends();
            *p = name;
        }

        done->Run();
    }
};
int main(int argc, char **argv) // 读配置文件，比如ip，端口。。
{
    LOG_INFO("first log message!\n");
    LOG_ERR("%s:%s:%d", __FILE__, __FUNCTION__, __LINE__);
    // 调用框架初始化操作 期望 provider -i config.conf
    MprpcApplication::Init(argc, argv);

    // 把UserService对象发布到rpc节点,provider是一个rpc网络服务对象
    RpcProvider provider;
    provider.NotifyService(new FriendService());

    // 启动一个rpc服务发布节点 Run以后，进程进入堵塞状态，等待远程的rpc调用请求
    provider.Run();

    return 0;
}
