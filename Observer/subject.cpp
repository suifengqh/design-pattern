#include "subject.h"
#include "observer.h"
#include <iostream>

Subject::~Subject(){}

void ConcreteSubject::Attach(Observer* ob){
        m_ObserverList.push_back(ob);
}

void ConcreteSubject::Detach(Observer* ob){
        m_ObserverList.remove(ob);
}

void ConcreteSubject::Notify(){
        for(auto ob : m_ObserverList){
                ob->Update(m_state);
        }
}

ConcreteSubject::~ConcreteSubject(){
        std::cout << "delete ConcreteSubject" << std::endl;
}