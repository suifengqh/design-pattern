#include "decorator.h"
#include <iostream>

void ConcreteComponent::Operation(){
        std::cout << "I am a ConcreteComponent without decoratored." << std::endl;
}

void Decorator::Operation(){
        if(m_component){
                m_component->Operation();
        }
}

void ConcreteDecoratorA::Operation(){
        Decorator::Operation();
        AddedBehavior();
}

void ConcreteDecoratorA::AddedBehavior(){
        std::cout << "This is added behavior A." << std::endl;
}

void ConcreteDecoratorB::Operation(){
        Decorator::Operation();
        AddedBehavior();
}

void ConcreteDecoratorB::AddedBehavior(){
        std::cout << "This is added behavior B." << std::endl;
}
