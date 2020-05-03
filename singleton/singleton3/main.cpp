#include "singleton.h"

int main(){
        Singleton s1 = Singleton::GetInstance();
        s1.PrintAddress();

        Singleton s2 = Singleton::GetInstance();
        s2.PrintAddress();

        return 0;
}