#include "abstract_factory.h"
#include <iostream>

using namespace std;

void ProductA1::Show(){
       cout << "I'm a product A1." << endl;
}

ProductA1::~ProductA1(){
        cout << "detele a product A1." << endl;
}

void ProductA2::Show(){
       cout << "I'm a product A2." << endl;
}

ProductA2::~ProductA2(){
        cout << "detele a product A2." << endl;
}

void ProductB1::Show(){
       cout << "I'm a product B1." << endl;
}

ProductB1::~ProductB1(){
        cout << "detele a product B1." << endl;
}

void ProductB2::Show(){
       cout << "I'm a product B2." << endl;
}

ProductB2::~ProductB1(){
        cout << "detele a product B2." << endl;
}

ProductA* Factory1::createProduct(){
	return new ProductA1();
}

ProductB* Factory1::createProduct(){
	return new ProductB1();
}

Factory1::~Factory1(){
	cout << "close factory 1." << endl;
}

ProductA* Factory2::createProduct(){
	return new ProductA2();
}

ProductB* Factory2::createProduct(){
	return new ProductB2();
}

Factory2::~Factory2(){
	cout << "close factory 2." << endl;
}