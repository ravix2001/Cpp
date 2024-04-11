#include<iostream>
using namespace std;

class stud{
    int a;
    public:
    void input(){
        cout<<"Enter the value of a : ";
        cin>>a;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
    }
    stud operator -();      //using constructor
};
stud stud::operator -(){
    stud temp;
    temp.a=-a;
    return temp;
}

int main(){
    stud s1,s2;
    s1.input();
    cout<<"Before overloading"<<endl;
    s1.display();
    s2=-s1;
    cout<<"After overloading"<<endl;
    s2.display();
    return 0;
}
