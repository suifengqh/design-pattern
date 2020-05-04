#ifndef PROXY_H
#define PROXY_H

class Subject{
public:
        virtual ~Subject() = 0;
        void Request() = 0 {};
};

class ConcreteSubject : public Subject{
public:
        ~ConcreteSubject();
        void Request();
};

class Proxy{
public:
        Proxy(Subject* sub);
        ~Proxy();
        void Request();
private:
        Subject* m_subject;
};

#endif