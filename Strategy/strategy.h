#ifndef STRAREGY_H
#define STRAREGY_H

typedef enum StrategyType
{
        StrategyA,
	StrategyB,
	StrategyC
}STRATEGYTYPE;

class Strategy{
public:
	virtual void AlgorithmInterface() = 0;
	virtual ~Strategy() = 0;
};

class ConcreteStrategyA : public Strategy{
public:
        void AlgorithmInterface();
        ~ConcreteStrategyA();
};

class ConcreteStrategyB : public Strategy{
public:
        void AlgorithmInterface();
        ~ConcreteStrategyB();
};

class ConcreteStrategyC : public Strategy{
public:
        void AlgorithmInterface();
        ~ConcreteStrategyC();
};

class Context
{
public:
	Context(STRATEGYTYPE strategyType);
	~Context();
	void ContextInterface();
private:
	Strategy *pStrategy;
};

#endif