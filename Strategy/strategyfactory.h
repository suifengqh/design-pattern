#ifndef STRATEGY_FACTORY_H
#define STRATEGY_FACTORY_H

class Strategy;

class StrategyFactory{
public:
	virtual Strategy* GetStrategy() = 0;
	virtual ~StrategyFactory(){}
}; 

class StrategyAFactory : public StrategyFactory{
public:
	Strategy* GetStrategy();
	~StrategyAFactory();
};

class StrategyBFactory : public StrategyFactory{
public:
	Strategy* GetStrategy();
	~StrategyBFactory();
};

class StrategyCFactory : public StrategyFactory{
public:
	Strategy* GetStrategy();
	~StrategyCFactory();
};

#endif