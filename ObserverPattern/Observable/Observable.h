#ifndef OBSERVABLE_H
#define OBSERVABLE_H

class Observable{
public:
    virtual void addObserver(Observer* observer) = 0;
    virtual void removeObserver(Observer* observer) = 0;
    virtual void notifyObserver() = 0;
    virtual void setStock(int val) = 0;
};

#endif