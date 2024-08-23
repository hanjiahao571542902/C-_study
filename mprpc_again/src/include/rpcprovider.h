#pragma once
#include "google/protobuf/service.h"
#include <muduo/net/TcpServer.h>
#include <muduo/net/EventLoop.h>
#include <muduo/net/InetAddress.h>
#include <muduo/net/TcpConnection.h>
#include <string>
#include <functional>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/message.h>
#include <unordered_map>
#include "rpcheader.pb.h"

class RpcProvider
{
public:
    void NotifyService(google::protobuf::Service *servcice);
    void Run();

private:
    muduo::net::EventLoop m_eventLoop;
    // 服务的内容
    struct ServiceInfo
    {
        google::protobuf::Service *m_servcice;
        std::unordered_map<std::string, const google::protobuf::MethodDescriptor *> m_methodMap;
    };

    // 记录服务名称和服务的内容（服务本身，方法名，方法）
    std::unordered_map<std::string, ServiceInfo> m_serviceMap;
    void OnMessage(const muduo::net::TcpConnectionPtr &, muduo::net::Buffer *, muduo::Timestamp);
    void OnConnection(const muduo::net::TcpConnectionPtr &);
    void SendRpcResponse(const muduo::net::TcpConnectionPtr &, google::protobuf::Message *);
};