#pragma once
#include <string>
#include <google/protobuf/service.h>
class MprpcController : public google::protobuf::RpcController
{
private:
    bool m_isFailed;
    std::string m_errText;

public:
    MprpcController();

    void Reset();

    bool Failed() const;

    std::string ErrorText() const;

    void StartCancel();

    void SetFailed(const std::string &reason);

    bool IsCanceled() const;

    void NotifyOnCancel(google::protobuf::Closure *callback);
};