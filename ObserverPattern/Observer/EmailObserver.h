#ifndef EMAIL_OBSERVER_H
#define EMAIL_OBSERVER_H

#include<bits/stdc++.h>
#include "Observer.h"
#include "../Observable/Observable.h"

using namespace std;

class EmailObserver : public Observer {
    Observable* observable;
    string emailId;
public:
    EmailObserver(Observable* obs, const string& email) : observable(obs), emailId(email) {}

    void update() override {
        sendMail(emailId,"Product is in stock hurry up");
    }
    void sendMail(const string& email, const string& message) {
        // Logic to send email
        cout << "mail sent to : " << email << " with message: " << message << endl;
    }
};

#endif