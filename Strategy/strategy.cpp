#include "strategy.h"
#include "strategyfactory.h"
#include <iostream>

Strategy::~Strategy(){}

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

Context::Context(StrategyFactory* strategy_factory){
	if(strategy_factory){
		pStrategy = strategy_factory->GetStrategy();
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


