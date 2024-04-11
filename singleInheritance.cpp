#include<iostream>
using namespace std;
class Person{
    protected:
    string name;
    int age;
};
class Student : public Person{
    public:
    void set(){
        cout<<"Enter name and age: ";
        cin>>name>>age;
    }
    void show(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
int main(){
    Student s;
    s.set();
    s.show();
    return 0;
}