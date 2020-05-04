#include "adapter.h"
#include <iostream>

void Adapter::Request(){
        Adaptee::SpecificRequest();
}

Adapter::~Adapter() {
	std::cout << "delete adapter" << std::endl;
}