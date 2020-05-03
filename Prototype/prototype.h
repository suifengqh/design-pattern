#ifndef PROTOTYPE_H
#define PROTOTYPE_H

class Prototype{
public:
        virtual Prototype* clone() = 0;
        virtual ~Prototype() = 0;
        void Increase(int t) = 0;
        int GetCounter() = 0;
};

class ConcretePrototype : public Prototype{
public:
        ConcretePrototype(int m) : m_counter(m){}
        ConcretePrototype(const ConcretePrototype& right);
        Prototype* clone();
        ~ConcretePrototype();
        void Increase(int t);
        int GetCounter();
private:
        int m_counter;
};

#endif