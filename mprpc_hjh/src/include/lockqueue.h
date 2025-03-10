// 模板代码只能写在头文件里
#pragma once
#include <queue>
#include <thread>
#include <mutex>              //pthread_mutex.h
#include <condition_variable> //pthread_condition_t
// 异步写日志的日志队列
template <typename T>
class LockQueue
{
private:
    std::queue<T> m_queue;
    std::mutex m_mutex;
    std::condition_variable m_condition_variable;

public:
    // 多个worker线程都会写日志queue
    void Push(const T &data)
    {
        std::lock_guard<std::mutex> lock(m_mutex);
        // 出了函数右括号，锁自动释放
        m_queue.push(data);
        // 只有一个进程在写日志
        m_condition_variable.notify_one();
    }
    // 一个线程读日志queue，写日志文件
    T Pop()
    {
        std::unique_lock<std::mutex> lock(m_mutex);
        while (m_queue.empty())
        {
            // 日志队列为空，线程进入wait状态
            m_condition_variable.wait(lock);
        }

        T data = m_queue.front();
        m_queue.pop();
        return data;
    }
};
