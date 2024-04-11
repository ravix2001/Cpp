/*Create a class called carpark that has int data member for car id, int data member for charge/hour, and float data member for the parked time. Make functions to set data members and show the charges and parked hours of the corresponding car id. Make functions for setting and showing the data members. Member function should be called from other functions.*/
#include <iostream>
using namespace std;

class CarPark {
private:
    int carId;
    int chargePerHour;
    float parkedTime;

public:
    void setCarDetails(int id, int charge, float time) {
        carId = id;
        chargePerHour = charge;
        parkedTime = time;
    }

    void showChargesAndHours() {
        cout << "Car ID: " << carId << endl;
        cout << "Charge per hour: Rs." << chargePerHour << endl;
        cout << "Parked Time: " << parkedTime << " hours" << endl;

        float totalCharge = chargePerHour * parkedTime;
        cout << "Total Charges: Rs." << totalCharge << endl;
    }

    void setCarId(int id) {
        carId = id;
    }

    void setChargePerHour(int charge) {
        chargePerHour = charge;
    }

    void setParkedTime(float time) {
        parkedTime = time;
    }

    void showCarDetails() {
        cout << "Car ID: " << carId << endl;
        cout << "Charge per hour: Rs." << chargePerHour << endl;
        cout << "Parked Time: " << parkedTime << " hours" << endl;
    }
};

int main() {
    CarPark car;

    // Set car details
    car.setCarDetails(123, 5, 2.5);

    // Show charges and parked hours
    car.showChargesAndHours();

    // Set individual data members
    car.setCarId(456);
    car.setChargePerHour(10);
    car.setParkedTime(3.5);

    // Show individual data members
    car.showCarDetails();

    return 0;
}
