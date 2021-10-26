#pragma once
#include<iostream>

using namespace std;

class Vehicle {
//******************** Lab 5 **********************//
    friend ostream& operator << (ostream&, const Vehicle&);

private:
    int numWheels, numDoors;

public:
    Vehicle() {
        numWheels = 4;
        numDoors = 4;
    };
    Vehicle(int wheels, int doors) {
        numWheels = wheels;
        numDoors = doors;
    };
//************ Previous Labs *******************//
//    Vehicle(Vehicle &); //copy by reference
//    explicit Vehicle(Vehicle *); //copy by pointer
//    Vehicle();
//    ~Vehicle();
//    void setDoors(int);
//    int getDoors() const;
//    void setWheels(int);
//    int getWheels() const;
    void printVehicle() const;

//***************** Lab 5 ********************//
    Vehicle operator=(const Vehicle&);
    bool operator==(const Vehicle&) const;
    bool operator!=(const Vehicle&);

    Vehicle operator++();
    Vehicle operator++(int);
    Vehicle operator--();
    Vehicle operator--(int);
};