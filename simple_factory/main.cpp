#include "simple_factory.h"
#include <cstdlib>

int main(){
	// First, create a factory object
	Factory *ProductFactory = new Factory();
	Product *productObjA = ProductFactory->CreateProduct(TypeA);
	if (productObjA != NULL)
		productObjA->show();

	Product *productObjB = ProductFactory->CreateProduct(TypeB);
	if (productObjB != NULL)
		productObjB->show();

	Product *productObjC = ProductFactory->CreateProduct(TypeC);
	if (productObjC != NULL)
		productObjC->show();

	delete ProductFactory;
	ProductFactory = NULL;

	delete productObjA;
	productObjA = NULL;

	delete productObjB;
	productObjB = NULL;        

	delete productObjC;
	productObjC = NULL;

	return 0;
}