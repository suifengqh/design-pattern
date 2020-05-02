#include "product.h"
#include "builder.h"
#include "director.h"

int main(){
	Builder *builderObj = new ConcreteBuilder();
	Director directorObj(builderObj);
	Product *productObj = directorObj.CreateProduct();
	productObj->Show();

        directorObj.DelProduct();

	delete builderObj;
	builderObj = NULL;

        return 0;
}