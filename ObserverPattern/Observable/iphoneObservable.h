#ifndef IPHONE_OBSERVABLE_H
#define IPHONE_OBSERVABLE_H

#include "Observable.h"
#include "../Observer/Observer.h"
#include <bits/stdc++.h>
using namespace std;
// iPhone specific implementation
class iPhoneObservable : public Observable {
    vector<Observer*> observers;
    int stock;
public:
    iPhoneObservable() : stock(0) {}

    void addObserver(Observer* observer) override{
        observers.push_back(observer);
    }

    void removeObserver(Observer* observer) override{
        observers.erase(remove(observers.begin(), observers.end(), observer), observers.end());
    }

    void notifyObserver() override{
        for (auto observer : observers) {
            observer->update();
        }
    }

    void setStock(int val) override{
        if (stock == 0){
            notifyObserver();
        }
        stock += val;
    }
};

#endif