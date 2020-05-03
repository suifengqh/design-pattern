#include "singleton.h"
#include <iostream>

std::unique_ptr<Singleton> Singleton::m_instance;
std::mutex Singleton::m_mutex;

//double lock : not multi-thread safe
Singleton& Singleton::GetInstance(){
        if(!m_instance){
                std::lock_guard<std::mutex> lock(m_mutex);
                if(!m_instance){
                        m_instance.reset(new Singleton);
                }
        }
        return *m_instance;
}

void Singleton::PrintAddress(){
        std::cout << "address : " << (int)this << std::endl;
}