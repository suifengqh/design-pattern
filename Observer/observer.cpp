#include "observer.h"
#include <iostream>

void ConcreteObserver::Update(int value){
        std::cout << "ConcreteObserver get the update. New State : " << value << std::endl;
}

ConcreteObserver::~ConcreteObserver(){
        std::cout << "delete ConcreteObserver" << std::endl;
}