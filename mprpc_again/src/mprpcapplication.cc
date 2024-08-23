#include "mprpcapplication.h"
#include <iostream>
#include <string>
#include <unistd.h>
MprpcConfig MprpcApplication::m_config;

void ShowArgsHelp()
{
    std::cout << "format: command -i <configfile>" << std::endl;
}

void MprpcApplication::Init(int argc, char **argv)
{
    if (argc < 2)
    {
        ShowArgsHelp();
        exit(EXIT_FAILURE);
    }
    int c = 0;
    std::string config_file;
    while ((c = getopt(argc, argv, "i:")) != -1)
    {
        switch (c)
        {
        case 'i':
            config_file = optarg;
            break;
        case '?':
            ShowArgsHelp();
            exit(EXIT_FAILURE);
        case ':':
            ShowArgsHelp();
            exit(EXIT_FAILURE);
        default:
            break;
        }
    }
    m_config.LoadConfigFile(config_file.c_str());
    // std::cout << m_config.Load("rpcserverip") << std::endl;
    // std::cout << m_config.Load("rpcserverport") << std::endl;
    // std::cout << m_config.Load("zookeeperip") << std::endl;
    // std::cout << m_config.Load("zookeeperport") << std::endl;
}

MprpcApplication &MprpcApplication::GetInstance()
{
    static MprpcApplication app;
    return app;
}
MprpcConfig &MprpcApplication::GetConfig()
{
    return m_config;
}