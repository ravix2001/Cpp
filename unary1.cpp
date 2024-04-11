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
    void operator -(){          //can be done like this
        a=-a;
    }
};
/* void stud::operator -(){      //or can be done like this 
    a=-a;
} */

int main(){
    stud s1,s2;
    s1.input();
    s1.display();
    s2=s1;
    s2.display();
    -s1;
    s1.display();
    s2=s1;
    s2.display();
    //s2=-s1;   not possible in this code it can be done by another method see another code(unary2.cpp)
    return 0;
}