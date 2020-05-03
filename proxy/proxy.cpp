#include "proxy.h"
#include <iostream>

ConcreteSubject::~ConcreteSubject(){
        std::cout << "delete a concrete subject." << std::endl;
}

void ConcreteSubject::Request(){
        std::cout << "concrete subject request." << std::endl;
}

Proxy::Proxy(Subject* sub){
        m_subject = sub;
}

Proxy::~Proxy(){
        if(m_subject){
                delete m_subject;
                m_subject = NULL;
        }
}

void Proxy::Request(){
        if(m_subject){
                m_subject->Request();
        }
}