#include <iostream>
#include <vector>
#include <string>
#include "test.pb.h"
using namespace fixbug;
int main()
{
    fixbug::GetFriendListsResponse res;
    fixbug::ResultCode *code = res.mutable_code();
    code->set_errcode(0);
    code->set_errmsg("");

    User *user1 = res.add_friend_list();
    user1->set_name("h1");
    user1->set_age(18);
    user1->set_sex(User::MAN);
    User *user2 = res.add_friend_list();
    user2->set_name("h2");
    user2->set_age(19);
    user2->set_sex(User::MAN);
    User *user3 = res.add_friend_list();
    user3->set_name("h3");
    user3->set_age(20);
    user3->set_sex(User::MAN);
    for (int i = 0; i < res.friend_list_size(); ++i)
    {
        std::cout << res.friend_list(i).name();
    }
}
// int main1()
// {
//     fixbug::GetFriendListsRequest req;
//     req.set_userid(7);
//     std::string req_str;
//     req.SerializeToString(&req_str);
//     std::cout << req_str << std::endl;

//     fixbug::GetFriendListsRequest req2;
//     if (req2.ParseFromString(req_str))
//     {
//         std::cout << req2.userid() << std::endl;
//     }
// }