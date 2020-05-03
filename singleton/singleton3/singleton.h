#ifndef SINGLETON_H
#define SINGLETON_H

//C++11 static local variable 
class Singleton{
public:
        static Singleton& GetInstance();
        void PrintAddress();
        ~Singleton() = default;
private:
        Singleton() = default;
        Singleton(const Singleton&) = delete;
        Singleton& operator=(const Singleton&) = delete;
};

#endif