#ifndef ADAPTER_H
#define ADAPTER_H

#include "adaptee.h"
#include "target.h"

class Adapter : public Target, public Adaptee{
public:
        void Request();
}

#endif