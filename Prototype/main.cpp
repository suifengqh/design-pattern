#include "prototype.h"
#include <iostream>
#include <cstdlib>

int main(){
        Prototype* con_pro_1 = new ConcretePrototype(3);
        con_pro_1->Increase(2);

        std::cout << "con_pro_1 count is " << con_pro_1->GetCounter() << std::endl;

        Prototype* con_pro_1_clone = con_pro_1->clone();

        std::cout << "con_pro_1_clone count is " << con_pro_1_clone->GetCounter() << std::endl;

        delete con_pro_1;
        con_pro_1 = NULL;

        delete con_pro_1_clone;
        con_pro_1_clone = NULL;

        return 0;
}