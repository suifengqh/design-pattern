#include "strategy.h"
#include <iostream>

void ConcreteStrategyA::AlgorithmInterface(){
        std::cout << "I am from ConcreteStrategyA." << std::endl;
}

ConcreteStrategyA::~ConcreteStrategyA(){
        std::cout << "delete StrategyA" <<std::endl;
}

void ConcreteStrategyB::AlgorithmInterface(){
        std::cout << "I am from ConcreteStrategyB." << std::endl;
}

ConcreteStrategyB::~ConcreteStrategyB(){
        std::cout << "delete StrategyB" <<std::endl;
}

void ConcreteStrategyC::AlgorithmInterface(){
        std::cout << "I am from ConcreteStrategyC." << std::endl;
}

ConcreteStrategyC::~ConcreteStrategyC(){
        std::cout << "delete StrategyC" <<std::endl;
}

Context::Context(STRATEGYTYPE strategyType){
        switch (strategyType)
        {
        case StrategyA:
                pStrategy = new ConcreteStrategyA;
                break;

        case StrategyB:
                pStrategy = new ConcreteStrategyB;
                break;

        case StrategyC:
                pStrategy = new ConcreteStrategyC;
                break;

        default:
                pStrategy = NULL;
                break;
        }       
}

Context::~Context(){
        std::cout << "delete context" <<std::endl;
        if(pStrategy){
                delete pStrategy;
                pStrategy = NULL;
        }
}

void Context::ContextInterface(){
        if(pStrategy){
                pStrategy->AlgorithmInterface();
        }
}


