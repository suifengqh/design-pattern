#ifndef DECORATOR_H
#define DECORATOR_H

class Component{
public:
        virtual void Operation() = 0;
};

class ConcreteComponent : public Component{
public:
        void Operation();
};

class Decorator : public Component{
public:
        Decorator(Component* pComponent) : m_component(pComponent) {}
        void Operation();
protected:
        Component* m_component;
};

class ConcreteDecoratorA : public Decorator{
public:
        ConcreteDecoratorA(Component* pComponent) : Decorator(pComponent) {}
        void Operation();
private:
        void AddedBehavior();
};

class ConcreteDecoratorB : public Decorator{
public:
        ConcreteDecoratorB(Component* pComponent) : Decorator(pComponent) {}
        void Operation();
private:
        void AddedBehavior();
};

#endif