#include "factory_method.h"
#include <cstdlib>

int main(){
	Factory* ProductFactoryA = new FactoryA();
	Factory* ProductFactoryB = new FactoryB();

	Product* productA = ProductFactoryA->createProduct();
	productA->Show();

	Product* productB = ProductFactoryB->createProduct();
	productB->Show();

	delete productA;
	productA = NULL;

	delete productB;
	productB = NULL;

	delete ProductFactoryA;
	ProductFactoryA = NULL;

	delete ProductFactoryB;
	ProductFactoryB = NULL;
}