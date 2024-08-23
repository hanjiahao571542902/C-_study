#include "mprpcconfig.h"

class MprpcApplication
{
public:
    static void Init(int argc, char **argv);
    static MprpcApplication &GetInstance();
    static MprpcConfig &GetConfig();

private:
    MprpcApplication() {};
    ~MprpcApplication() {};
    MprpcApplication(const MprpcApplication &) = delete;
    MprpcApplication &operator=(const MprpcApplication &) = delete;
    MprpcApplication(MprpcApplication &&) = delete;
    static MprpcConfig m_config;
};
