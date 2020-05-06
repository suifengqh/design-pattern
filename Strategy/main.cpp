#include "strategy.h"
#include "strategyfactory.h"
#include <cstdlib>

int main(){
	StrategyFactory* factoryA = new StrategyAFactory();
        Context *pContextA = new Context(factoryA);
        pContextA->ContextInterface();
	
	StrategyFactory* factoryB = new StrategyBFactory();
        Context *pContextB = new Context(factoryB);
        pContextB->ContextInterface();

	StrategyFactory* factoryC = new StrategyCFactory();
        Context *pContextC = new Context(factoryC);
        pContextC->ContextInterface();

        delete pContextA; pContextA = NULL;
        delete pContextB; pContextB = NULL;
	delete pContextC; pContextC = NULL;

	delete factoryA; factoryA = NULL;
	delete factoryB; factoryB = NULL;
	delete factoryC; factoryC = NULL;

        return 0;
}