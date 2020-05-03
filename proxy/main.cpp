#include "proxy.h"
#include <cstdlib>

int main(){
        ConcreteSubject* p_sub = new ConcreteSubject();
        Proxy* p_proxy = new Proxy(p_sub);
        p_proxy->Request();

        delete p_sub;
        p_sub = NULL;

        delete p_proxy;
        p_proxy = NULL;

        return 0;
}