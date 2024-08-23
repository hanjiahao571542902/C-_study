#pragma once

// 框架读取配置文件类
// 读配置文件是io很慢的所以就读一次
// rpcserverip rpcserverport zookeeperip zookeeperport

#include <unordered_map>
#include <string>
class MprpcConfig
{
private:
    /* data */
    std::unordered_map<std::string, std::string> m_configMap;

public:
    // 负责解析加载配置文件
    void LoadConfigFile(const char *config_file);
    // 查询配置项信息
    std::string Load(const std::string &key);
    // 去掉字符串前后空格
    void Trim(std::string &src_buf);
};
