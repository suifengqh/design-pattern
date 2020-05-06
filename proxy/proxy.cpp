#include "proxy.h"
#include <iostream>

Subject::~Subject(){}

ConcreteSubject::~ConcreteSubject(){
        std::cout << "delete a concrete subject." << std::endl;
}

void ConcreteSubject::Request(){
        std::cout << "concrete subject request." << std::endl;
}

Proxy::Proxy() : m_subject(new ConcreteSubject){}

Proxy::~Proxy(){
        std::cout << "delete a proxy." << std::endl;
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