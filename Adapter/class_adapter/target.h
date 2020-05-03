#ifndef TARGET_H
#define TARGET_H

#include <iostream>

class Target{
public:
        virtual void Request(){
                std::cout << "Target Request" << std::endl;
        }
};

#endif