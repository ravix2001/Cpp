#include <iostream>
using namespace std;

class Student{
        char *name;
        mutable char *address;
    public:
        Student(char *n, char *ad) {
            name = n;
            address = ad;
        }
        void change_name(char *new_name) {
            name = new_name;
        }
        void change_address(char *new_address) const {
            address = new_address;
        }
        void display() const {
            cout << "Name:" << name << endl;
            cout << "Address:" << address << endl;
        }
};
int main(){
        const Student s1("ABC" , "PlanetEarth");
        //s1.change_name("XYZ");
        s1.change_address("Nepal");
        s1.display();
        return 0;
}