/*Write a program that illustrates the following relationship and comment on them. 

i) const_object.non_const_mem_function

ii) const_object.const_mem_function

iii) non_const_object.non_const_mem_function

iv) non_const_object.const_mem_function*/
#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int val) : value(val) {}

    void nonConstMemberFunction() {
        cout << "Non-const member function called. Value: " << value << endl;
        value = 10; // Modifying the value
    }

    void constMemberFunction() const {
        cout << "Const member function called. Value: " << value << endl;
        // value = 10;  // Error: Attempting to modify a const object
    }
};

int main() {
    const MyClass constObj(5);
    MyClass nonConstObj(7);

    // i) const_object.non_const_mem_function
    // Allowed but not recommended, as it allows modification of non-const member variables
    //constObj.nonConstMemberFunction();

    // ii) const_object.const_mem_function
    // Allowed and recommended, as it doesn't modify member variables
    constObj.constMemberFunction();

    // iii) non_const_object.non_const_mem_function
    // Allowed and commonly used, as it can modify member variables
    nonConstObj.nonConstMemberFunction();

    // iv) non_const_object.const_mem_function
    // Allowed and commonly used, as it doesn't modify member variables
    nonConstObj.constMemberFunction();

    return 0;
}
