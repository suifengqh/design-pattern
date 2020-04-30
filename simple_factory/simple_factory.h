#ifndef SIMPLE_FACTORY_H
#define SIMPLE_FACTORY_H

typedef enum ProductTypeTag
{
	TypeA,
	TypeB,
	TypeC
}PRODUCTTYPE;

class Product{
public:
	virtual void show() = 0;
	virtual ~Product(){}
};

class ProductA : public Product{
	void show();
	~ProductA();
};

class ProductB : public Product{
	void show();
	~ProductB();
};

class ProductC : public Product{
	void show();
	~ProductC();
};

class Factory{
public:
	Product* CreateProduct(PRODUCTTYPE type);
};

#endif