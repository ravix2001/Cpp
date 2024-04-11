#include <iostream>
using namespace std;
class MyClass
{
    int code;
    static int count; // static data member
public:
    void setcode(){
        code=++count;
    }
    static void Class()         //static member function
    { 
        cout<<"count: " <<count<< endl; 
    }
};

int MyClass::count; // Initialize static data member

int main()
{
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;
    obj1.setcode();
    obj2.setcode();
    obj3.setcode();
    MyClass::Class();
    return 0;
}
