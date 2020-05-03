#ifndef ADAPTEE_H
#define ADAPTEE_H

#include <iostream>

class Adaptee{
public:
        void SpecificRequest(){
                std::cout << "Adaptee Specific Request" << std::endl;
        }
};

#endif