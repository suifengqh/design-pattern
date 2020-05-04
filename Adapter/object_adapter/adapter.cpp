#include "adapter.h"
#include <iostream>

Adapter::~Adapter(){
        std::cout << "delete adapter" << std::endl;
        if(m_adaptee){
                delete m_adaptee;
                m_adaptee = NULL;
        }
}

void Adapter::Request(){
        if(m_adaptee){
                m_adaptee->SpecificRequest();
        }
}