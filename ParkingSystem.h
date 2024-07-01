
#ifndef PARKINGSYSTEM_H
#define PARKINGSYSTEM_H

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    Vehicle(const string& registration, const string& manufacturer, const string& model)
        : registrationNumber(registration), manufacturer(manufacturer), model(model) {}

    virtual ~Vehicle() {} // Virtual destructor for polymorphic behavior

    virtual void display() const {
        cout << "Registration Number: " << registrationNumber << ", Manufacturer: " << manufacturer
            << ", Model: " << model << endl;
    }

protected:
    string registrationNumber;
    string manufacturer;
    string model;
};

class Car : public Vehicle {
public:
    Car(const string& registration, const string& manufacturer, const string& model, int doors)
        : Vehicle(registration, manufacturer, model), numDoors(doors) {}

    void display() const override {
        Vehicle::display();
        cout << ", Number of Doors: " << numDoors << endl;
    }

private:
    int numDoors;
};

class Bike : public Vehicle {
public:
    Bike(const string& registration, const string& manufacturer, const string& model)
        : Vehicle(registration, manufacturer, model) {}
};

class ParkingLot {
public:
    ParkingLot(int size);
    ~ParkingLot();

    bool park(Vehicle* vehicle);
    Vehicle** getParkedVehicles();
    int getNum_of_slots() const;

private:
    int numof_slots;
    Vehicle** parkedVehicles;
};

#endif // PARKINGSYSTEM_H

