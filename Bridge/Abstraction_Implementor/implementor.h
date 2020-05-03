#ifndef IMPLEMENTOR_H
#define IMPLEMENTOR_H

class Implementor
{
public:
        virtual void OperationImpl() = 0;
};
class ConcreteImpementor : public Implementor
{
public:
        void OperationImpl();
};

#endif