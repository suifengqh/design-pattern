#ifndef FACTORY_METHOD_H
#define FACTORY_METHOD_H

class Product{
public:
	virtual void Show() = 0;
	virtual ~Product(){}
};

class ProductA : public Product{
public:
	void Show();
	~ProductA();
};

class ProductB : public Product{
public:
	void Show();
	~ProductB();
};

class Factory{
public:
	virtual Product* createProduct() = 0;
	virtual ~Factory(){}
};

class FactoryA : public Factory{
public:
	Product* createProduct();
	~FactoryA();
};

class FactoryB : public Factory{
public:
	Product* createProduct();
	~FactoryB();
};

#endif