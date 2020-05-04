#include "proxy.h"
#include <cstdlib>

int main(){
        Proxy* p_proxy = new Proxy();
        p_proxy->Request();

        delete p_proxy;
        p_proxy = NULL;

        return 0;
}