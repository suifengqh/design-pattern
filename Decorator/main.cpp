#include "decorator.h"
#include <cstdlib>
#include <iostream>

int main(){
        ConcreteComponent* pComponentObj = new ConcreteComponent();
        Decorator* pDecoratorObjA = new ConcreteDecoratorA(pComponentObj);
        pDecoratorObjA->Operation();

        std::cout << "========================" << std::endl;

        Decorator *pDecoratorOjbB = new ConcreteDecoratorB(pComponentObj);
        pDecoratorOjbB->Operation();

        std::cout << "========================" << std::endl;

        Decorator* pDecoratorObjAB = new ConcreteDecoratorB(pDecoratorObjA);
        pDecoratorObjAB->Operation();

        std::cout << "========================" << std::endl;

        delete pComponentObj; pComponentObj = NULL;
        delete pDecoratorObjA; pDecoratorObjA = NULL;
        delete pDecoratorOjbB; pDecoratorOjbB = NULL;
        delete pDecoratorObjAB; pDecoratorObjAB = NULL;

        return 0;
}