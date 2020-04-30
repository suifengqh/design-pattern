#include "factory_method.h"
#include <iostream>

using namespace std;

void ProductA::Show(){
	cout << "I'm a product A." << endl;
}

ProductA::~ProductA(){
	cout << "detele a product A." << endl;
}

void ProductB::Show(){
	cout << "I'm a product B." << endl;
}

ProductB::~ProductB(){
	cout << "detele a product B." << endl;
}

Product* FactoryA::createProduct(){
	return new ProductA();
}

FactoryA::~FactoryA(){
	cout << "close factory A." << endl;
}

Product* FactoryB::createProduct(){
	return new ProductB();
}

FactoryB::~FactoryB(){
	cout << "close factory B." << endl;
}