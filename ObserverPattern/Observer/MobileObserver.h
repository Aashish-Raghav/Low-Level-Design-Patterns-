#ifndef MOBILE_OBSERVER_H
#define MOBILE_OBSERVER_H

#include<bits/stdc++.h>
#include "Observer.h"
#include "../Observable/Observable.h"

using namespace std;

class MobileObserver : public Observer{
    Observable* observable;
    string mob;
public:
    MobileObserver(Observable* obs, const string& mobile) : observable(obs), mob(mobile) {}

    void update() override{
        sendSMS(mob,"Product is in stock hurry up");
    }
    void sendSMS(const string& mobile, const string& message) {
        // Logic to send SMS
        cout << "SMS sent to : " << mobile << " with message: " << message << endl;
    }
};

#endif