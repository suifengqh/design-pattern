#include "simple_factory.h"
#include <iostream>

using namespace std;

void ProductA::show(){
	cout << "I'm a product A." << endl;
}

ProductA::~ProductA(){
	cout << "detele a product A." << endl;
}

void ProductB::show(){
	cout << "I'm a product B." << endl;
}

ProductB::~ProductB(){
	cout << "detele a product B." << endl;
}

void ProductC::show(){
	cout << "I'm a product C." << endl;
}

ProductC::~ProductC(){
	cout << "detele a product C." << endl;
}

Product* Factory::CreateProduct(PRODUCTTYPE type){
	switch(type){
	case TypeA:
	{
		return new ProductA();
	}
	case TypeB:
	{
		return new ProductB();
	}
	case TypeC:
	{
		return new ProductC();
	}
	default:
	{
		cout << "invalid param." << endl;
		return NULL;
	}
	}
}
