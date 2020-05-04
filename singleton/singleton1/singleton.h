#ifndef SINGLETON_H
#define SINGLETON_H

#include <memory>
#include <mutex>

class Singleton
{
public:
        static Singleton& GetInstance();

        void PrintAddress();

        ~Singleton() = default;

private:
        Singleton() = default;
        Singleton(const Singleton&) = delete;
        Singleton& operator=(const Singleton&) = delete;

private:
        static std::unique_ptr<Singleton> m_instance;
        static std::mutex m_mutex;
};

#endif