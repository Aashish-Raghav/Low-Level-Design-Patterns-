#include<bits/stdc++.h>
using namespace std;

class DriveStrategy{
    public:
    virtual void drive() = 0;
};

class sportsDriveStrategy : public DriveStrategy{
    public:
    void drive(){
        cout << "Driving a sports car!" << endl;
    }
};

class SUVDriveStrategy : public DriveStrategy{
    public:
    void drive(){
        cout << "Driving an SUV!" << endl;
    }
};


class Vehicle{
    public:
    DriveStrategy* driveStrategy;
    Vehicle(DriveStrategy* ds): driveStrategy(ds) {}
    void drive(){
        driveStrategy->drive();
    }
};

class SportVehicle : public Vehicle{
    public:
    SportVehicle(): Vehicle(new sportsDriveStrategy()){
    }
};

class GoodVehicle : public Vehicle {
    public:
    GoodVehicle(): Vehicle(new SUVDriveStrategy()){
    }
};

int main(){
    Vehicle * v1 = new SportVehicle();
    Vehicle * v2 = new GoodVehicle();

    v1->drive();
    v2->drive();

    delete v1;
    delete v2;

    return 0;
}


