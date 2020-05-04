#include "strategy.h"
#include <cstdlib>

int main(){
        Context *pContextA = new Context(StrategyA);
        pContextA->ContextInterface();

        Context *pContextB = new Context(StrategyB);
        pContextB->ContextInterface();

        delete pContextA; pContextA = NULL;
        delete pContextB; pContextB = NULL;

        return 0;
}