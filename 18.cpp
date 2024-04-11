/*Write a class that can store Department ID and Department Name with constructors to initialize its members. Write destructor member in the same class and display the message "Object n goes out of the scope". Your program should be made such that it should show the order of constructor and destructor invocation.*/
#include <iostream>
using namespace std;

class Department {
private:
    int departmentId;
    string departmentName;

public:
    Department(int id, const string& name) : departmentId(id), departmentName(name) {
        cout << "Constructor invoked for Department: " << departmentId << endl;
    }

    ~Department() {
        cout << "Destructor invoked for Department: " << departmentId << endl;
    }
};

int main() {
    Department department1(1, "Department of Computer Science");
    {
        Department department2(2, "Department of Electrical Engineering");
        Department department3(3, "Department of Mechanical Engineering");
    }
    Department department4(4, "Department of Mathematics");

    return 0;
}
