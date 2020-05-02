#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "builder.h"

// Director
class Director
{
public:
	Director(Builder *builder){
                m_Builder = builder;
        }
	Product* CreateProduct()
	{
		m_Builder->BuildPartA();
		m_Builder->BuildPartB();
                return m_Builder->GetProduct();
	}

        void DelProduct(){
                m_Builder->DeleteProduct();
        }
private:
	Builder *m_Builder;
};

#endif