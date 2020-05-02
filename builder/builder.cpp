#include <cstdlib>
#include "builder.h"

ConcreteBuilder::ConcreteBuilder(){
        m_Product = new Product();
}

void ConcreteBuilder::BuildPartA()
{
        m_Product->SetPartA("Red wood");
}

void ConcreteBuilder::BuildPartB()
{
        m_Product->SetPartB("Green iron");
}

Product* ConcreteBuilder::GetProduct() 
{
        return m_Product;
}

void ConcreteBuilder::DeleteProduct(){
        if(m_Product){
                delete m_Product;
                m_Product = NULL;
        }
}