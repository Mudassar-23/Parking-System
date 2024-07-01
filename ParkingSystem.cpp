#include "ParkingSystem.h"

ParkingLot::ParkingLot(int size) : numof_slots(size) {
    parkedVehicles = new Vehicle * [numof_slots];
    for (int i = 0; i < numof_slots; ++i) {
        parkedVehicles[i] = nullptr;
    }
}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < numof_slots; ++i) {
        delete parkedVehicles[i];
    }
    delete[] parkedVehicles;
}

bool ParkingLot::park(Vehicle* vehicle) {
    for (int i = 0; i < numof_slots; ++i) {
        if (!parkedVehicles[i]) {
            parkedVehicles[i] = vehicle;
            return true;
        }
    }
    return false; // Parking lot is full
}

Vehicle** ParkingLot::getParkedVehicles() {
    return parkedVehicles;
}

int ParkingLot::getNum_of_slots() const {
    return numof_slots;
}
