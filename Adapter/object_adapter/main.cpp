#include "adapter.h"
#include <cstdlib>

int main(){
        Target* targetObj = new Adapter();
        targetObj->Request();

        delete targetObj;
        targetObj = NULL;
        return 0;
}