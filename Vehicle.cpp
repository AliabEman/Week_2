#include "Vehicle.h"

using namespace std;
//Vehicle::Vehicle(Vehicle &copy) {
//    cout << "Address of &Vehicle:" << &copy << endl;
//    cout << "Number of wheels: " << copy.numWheels << endl;
//    cout << "Number of doors: " << copy.numDoors << endl;
//}
//
//Vehicle::Vehicle(Vehicle *copy) : Vehicle() { //copy constructor by ptr
//    cout << "Address of *Vehicle:" << copy << endl;
//    cout << "Number of wheels: " << copy->numWheels << endl;
//    cout << "Number of doors: " << copy->numDoors << endl;
//}
////Vehicle::Vehicle(int w, int d) {
////    numWheels = w;
////    numDoors = d;
////    cout << "In constructor with 2 parameters" << endl;
////}
////
////
////Vehicle::Vehicle(int w) : Vehicle(w, 4) {
////    numWheels = w;
////    numDoors = 4;
////    cout << "In constructor with 1 parameter, wheels = " << w << endl;
////}
////

//
//Vehicle::~Vehicle() {
//    cout << "In destructor" << endl;
//}
//
//void Vehicle::setDoors(int nDoors) { numDoors = nDoors; }
//int Vehicle::getDoors() const { return numDoors; }
//
//void Vehicle::setWheels(int nWheels) { numWheels = nWheels; }
//int Vehicle::getWheels() const { return numWheels; }
//
void Vehicle::printVehicle() const {
    cout << "Number of Wheels: " << numWheels << endl;
    cout << "Number of Doors: " << numDoors << endl;
}
//
//Vehicle::Vehicle() = default;
//

ostream& operator << (ostream &output, const Vehicle &veh) {
    output << "Number of Wheels: "
           << veh.numWheels
           << "\nNumber of Doors: "
           << veh.numDoors;
    return output;
}

Vehicle Vehicle::operator=(const Vehicle &veh2) {
    return Vehicle(numWheels = veh2.numWheels, numDoors = veh2.numDoors);
};

bool Vehicle::operator==(const Vehicle &veh2) const {
    Vehicle veh1(numWheels, numDoors);
    if ((veh1.numWheels == veh2.numWheels)&&(veh1.numDoors == veh2.numDoors))
        return true;
    else
        return false;
};

bool Vehicle::operator!=(const Vehicle &veh2) {
    if ((numWheels == veh2.numWheels)&&(numDoors == veh2.numDoors))
        return false;
    else
        return true;
};

Vehicle Vehicle::operator++() {
    return Vehicle(++numWheels, ++numDoors);
};

Vehicle Vehicle::operator++(int) {
    return Vehicle(numWheels++, numDoors++);
};

Vehicle Vehicle::operator--() {
    return Vehicle(--numWheels, --numDoors);
};
Vehicle Vehicle::operator--(int) {
    return Vehicle(numWheels--, numDoors--);
};


