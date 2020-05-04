#include "singleton.h"
#include <iostream>
#include <memory>

std::unique_ptr<Singleton> Singleton::m_instance;

Singleton& Singleton::GetInstance(){
        static std::once_flag s_flag;
        std::call_once(s_flag, [&](){
                m_instance.reset(new Singleton);
        });
        return *m_instance;
}

void Singleton::PrintAddress(){
        std::cout << "address : " << (void*)this << std::endl;
}