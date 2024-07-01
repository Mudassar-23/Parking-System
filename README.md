Parking Management System in C++
Overview
This C++ project implements a simple parking management system using object-oriented programming concepts like inheritance and polymorphism. It includes classes for vehicles (Vehicle, Car, Bike) and a ParkingLot class to manage parking spaces.

Classes
-Vehicle
Base class for all vehicles.
Attributes: registrationNumber, manufacturer, model.
Methods: display() to show vehicle details.
-Car
Inherits from Vehicle.
Additional attribute: numDoors.
Methods: display() to override base class method.
-Bike
Inherits from Vehicle.
-ParkingLot
Manages parking spaces.
Attributes: numof_slots (number of parking slots), parkedVehicles (array of pointers to Vehicle objects).
Methods: park() to park vehicles, getParkedVehicles() to retrieve parked vehicles, getNum_of_slots() to get the number of parking slots.
