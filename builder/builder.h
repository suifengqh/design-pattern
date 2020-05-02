#ifndef BUILDER_H
#define BUILDER_H

#include "product.h"
#include <cstdlib>

class Builder
{
public:
	virtual void BuildPartA() {}
	virtual void BuildPartB() {}
	virtual Product *GetProduct() = 0;
        virtual void DeleteProduct() = 0;
};

// ConcreteBuilder
class ConcreteBuilder : public Builder
{
public:
	ConcreteBuilder();
	void BuildPartA();
	void BuildPartB();
	Product *GetProduct();
        void DeleteProduct();
private:
	Product *m_Product;
};

#endif