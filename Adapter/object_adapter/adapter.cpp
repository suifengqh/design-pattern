#include "adapter.h"
#include <iostream>

Adapter::~Adapter(){
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