#include "Observer/EmailObserver.h"
#include "Observer/MobileObserver.h"
#include "Observable/IphoneObservable.h"

using namespace std;

int main(){
    Observable* iphoneObservable = new iPhoneObservable();

    Observer* observer1 = new EmailObserver(iphoneObservable, "xyz@gmail.com");
    Observer* observer2 = new EmailObserver(iphoneObservable, "abc@gmail.com");
    Observer* observer3 = new MobileObserver(iphoneObservable, "1234567890");

    iphoneObservable->addObserver(observer1);
    iphoneObservable->addObserver(observer2);
    iphoneObservable->addObserver(observer3);

    iphoneObservable->setStock(10);
    iphoneObservable->setStock(100);


    return 0;
}