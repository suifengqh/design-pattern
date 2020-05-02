#ifndef ABSTRACT_FACTORY_H
#define ABSTRACT_FACTORY_H

class ProductA{
public:
	virtual void Show() = 0;
	virtual ~ProductA(){}
};

class ProductA1 : public ProductA{
public:
	void Show();
	~ProductA1();
};

class ProductA2 : public ProductA{
public:
	void Show();
	~ProductA2();
};

class ProductB{
public:
	virtual void Show() = 0;
	virtual ~ProductB(){}
};

class ProductB1 : public ProductB{
public:
	void Show();
	~ProductB1();
};

class ProductB2 : public ProductB{
public:
	void Show();
	~ProductB2();
};

class Factory{
public:
	virtual ProductA* createProductA() = 0;
        virtual ProductB* createProductB() = 0;
	virtual ~Factory(){}
};

class Factory1 : public Factory{
public:
	ProductA* createProductA();
        ProductB* createProductB();
	~Factory1();
};

class Factory2 : public Factory{
public:
	ProductA* createProductA();
        ProductB* createProductB();
	~Factory2();
};

#endif