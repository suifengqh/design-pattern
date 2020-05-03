#ifndef ABSTRACTION_H
#define ABSTRACTION_H

class Implementor;

class Abstraction{
public:
        Abstraction(Implementor* pImpl) : m_pImpl(pImpl) {}
        virtual void Operation() = 0;
protected:
        Implementor* m_pImpl;
};

class RedfinedAbstraction : public Abstraction{
public:
        RedfinedAbstraction(Implementor* pImpl) : Abstraction(pImpl) {}
        void Operation();
};

#endif