#include "strategyfactory.h"
#include "strategy.h"
#include <iostream>

Strategy* StrategyAFactory::GetStrategy(){
	return new ConcreteStrategyA();
}

StrategyAFactory::~StrategyAFactory(){
	std::cout << "close StrategyAFactory" << std::endl;
}


Strategy* StrategyBFactory::GetStrategy(){
	return new ConcreteStrategyB();
}

StrategyBFactory::~StrategyBFactory(){
	std::cout << "close StrategyBFactory" << std::endl;
}


Strategy* StrategyCFactory::GetStrategy(){
	return new ConcreteStrategyC();
}

StrategyCFactory::~StrategyCFactory(){
	std::cout << "close StrategyCFactory" << std::endl;
}
