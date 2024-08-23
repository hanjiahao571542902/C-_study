#include <iostream>
#include "mprpcconfig.h"

void MprpcConfig::LoadConfigFile(const char *config_file)
{
    FILE *pf = fopen(config_file, "r");
    if (pf == nullptr)
    {
        std::cout << config_file << "is not exist!" << std::endl;
    }
    while (!feof(pf))
    {
        char buf[512] = {0};
        fgets(buf, 512, pf);
        std::string read_buf(buf);

        int idx = read_buf.find('=');
        int endidx = read_buf.find('\n', idx);
        std::string key = read_buf.substr(0, idx);
        std::string value = read_buf.substr(idx + 1, endidx - idx - 1);
        m_configMap.insert({key, value});
    }
}
std::string MprpcConfig::Load(const std::string &key)
{
    auto it = m_configMap.find(key);
    if (it == m_configMap.end())
    {
        return "";
    }
    return it->second;
}