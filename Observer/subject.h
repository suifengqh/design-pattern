#ifndef SUBJECT_H
#define SUBJECT_H

#include <memory>
#include <list>

class Observer;

class Subject{
public:
        virtual void Attach(Observer* ob) = 0;
        virtual void Detach(Observer* ob) = 0;
        virtual void Notify() = 0;
	virtual ~Subject() = 0;
};

class ConcreteSubject : public Subject{
public:
        void Attach(Observer* ob);
        void Detach(Observer* ob);
        void Notify();
        void SetState(int state){
                m_state = state;
        }
        ~ConcreteSubject();
private:
        int m_state;
        std::list<Observer*> m_ObserverList;
};

#endif