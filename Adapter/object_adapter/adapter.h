#ifndef ADAPTER_H
#define ADAPTER_H

#include "adaptee.h"
#include "target.h"

class Adapter : public Target{
public:
        Adapter() : m_adaptee(new Adapterr){}
        ~Adapter();
        void Request();
private:
        Adaptee* m_adaptee;
}

#endif