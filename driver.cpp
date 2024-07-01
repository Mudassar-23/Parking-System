#include "ParkingSystem.h"
using namespace std;

int main() {
    ParkingLot* fastParking = new ParkingLot(30);
    Car* corolla1 = new Car("LOX 213", "Toyota", "Corolla", 4);
    Bike* honda1 = new Bike("LED 2179", "Honda", "CD70");

    if (fastParking->park(corolla1))
        cout << "Car got parked" << endl;
    if (fastParking->park(honda1))
        cout << "Bike got parked" << endl;

    int num = fastParking->getNum_of_slots();
    Vehicle** vehicles = fastParking->getParkedVehicles();

    for (int i = 0; i < num; i++) {
        if (vehicles[i] != nullptr)
            cout << "Parking slot " << i + 1 << " has ";
        else
            cout << "Parking slot " << i + 1 << " is empty" << endl;

        if (vehicles[i] != nullptr)
            vehicles[i]->display();

        cout << endl;
    }

    delete fastParking;
    delete corolla1;
    delete honda1;

    return 0;
}
