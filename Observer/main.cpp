#include "observer.h"
#include "subject.h"
#include <memory>

int main(){
        // Create Subject
        ConcreteSubject *pSubject = new ConcreteSubject();

        // Create Observer
        Observer *pObserver1 = new ConcreteObserver(pSubject);
        Observer *pObserver2 = new ConcreteObserver(pSubject);

        // Change the state
        pSubject->SetState(2);

        // Register the observer
        pSubject->Attach(pObserver1);
        pSubject->Attach(pObserver2);

        pSubject->Notify();

        // Unregister the observer
        pSubject->Detach(pObserver2);

        pSubject->SetState(3);
        pSubject->Notify();

        delete pObserver1; pObserver1 = NULL;
        delete pObserver2; pObserver2 = NULL;
        delete pSubject; pSubject = NULL;
        
        return 0;
}