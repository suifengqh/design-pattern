#ifndef OBSERVER_H
#define OBSERVER_H

#include <memory>
#include <iostream>

class Subject;

class Observer{
public:
        virtual void Update(int) = 0;
	virtual ~Observer() = 0 {};
};

class ConcreteObserver : public Observer {
public:
	ConcreteObserver(Subject* pSubject) : m_subject(pSubject) {}
	void Update(int value);
	~ConcreteObserver();
private:
       Subject* m_subject;
};

#endif