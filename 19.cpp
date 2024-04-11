/*Assume that one constructor initializes data member say num_vehicle, hour, and rate. There should be a 10% discount if num_vehicle exceeds 10. Display the total charge. Use two objects and show a bit-by-bit copy of one object to another (make your own copy constructor).*/
#include <iostream>
using namespace std;

class ParkingCharge {
private:
    int num_vehicle;
    int hour;
    double rate;

public:
    ParkingCharge(int num, int h, double r) : num_vehicle(num), hour(h), rate(r) {
        if (num_vehicle > 10) {
            rate *= 0.9; // Apply 10% discount
        }
    }

    ParkingCharge(const ParkingCharge& other) {
        num_vehicle = other.num_vehicle;
        hour = other.hour;
        rate = other.rate;
    }

    double calculateCharge() {
        return num_vehicle * hour * rate;
    }

    void displayCharge() {
        cout << "Total Charge: $" << calculateCharge() << endl;
    }
};

int main() {
    ParkingCharge charge1(8, 2, 5.0);
    ParkingCharge charge2(charge1); // Bit-by-bit copy using custom copy constructor

    charge1.displayCharge();
    charge2.displayCharge();

    return 0;
}
