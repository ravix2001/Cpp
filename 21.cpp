/*Create a class with a data member to hold a "serial number" for each object created from the class. That is, the first object created will be numbered 1, the second 2, and so on by using the basic concept of static data members. Use static member function if it is useful in the program. Otherwise, make a separate program that demonstrates the use of static member function.*/
#include <iostream>

class SerialNumberedObject {
private:
    static int nextSerialNumber;
    int serialNumber;

public:
    SerialNumberedObject() {
        serialNumber = nextSerialNumber++;
    }

    int getSerialNumber() const {
        return serialNumber;
    }

    static int getNextSerialNumber() {
        return nextSerialNumber;
    }
};

int SerialNumberedObject::nextSerialNumber = 1;

int main() {
    SerialNumberedObject obj1;
    SerialNumberedObject obj2;
    SerialNumberedObject obj3;

    std::cout << "Object 1 serial number: " << obj1.getSerialNumber() << std::endl;
    std::cout << "Object 2 serial number: " << obj2.getSerialNumber() << std::endl;
    std::cout << "Object 3 serial number: " << obj3.getSerialNumber() << std::endl;

    return 0;
}
