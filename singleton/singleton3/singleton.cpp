#include "singleton.h"
#include <iostream>

Singleton& Singleton::GetInstance(){
        static Singleton instance;
        return instance;
}

void Singleton::PrintAddress(){
        std::cout << "address : " << (void*)this << std::endl;
}