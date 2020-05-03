#include "implementor.h"
#include "abstraction.h"
#include <cstdlib>

int main(){
        Implementor *pImplObj = new ConcreteImpementor();
        Abstraction *pAbsObj = new RedfinedAbstraction(pImplObj);
        pAbsObj->Operation();

        delete pImplObj;
        pImplObj = NULL;

        delete pAbsObj;
        pAbsObj = NULL;
        
        return 0;        
}