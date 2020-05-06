#include "prototype.h"
#include <iostream>

Prototype::~Prototype(){}

ConcretePrototype::ConcretePrototype(const ConcretePrototype& right){
        m_counter = right.m_counter;
}

Prototype* ConcretePrototype::clone(){
        return new ConcretePrototype(*this);
}
ConcretePrototype::~ConcretePrototype(){
        std::cout << "delete a concrete prototype." << std::endl;
}

void ConcretePrototype::Increase(int t){
        m_counter += t;
}
        
int ConcretePrototype::GetCounter(){
        return m_counter;
}