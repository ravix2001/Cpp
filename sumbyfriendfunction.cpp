#include<iostream>
using namespace std;

class Second;

class First{
    int num;
    public:
     void getdata(int value){
        num=value;
     }
     friend void sum(First,Second); 
};

class Second{
    int data;
    public:
     void getdata(){
        cout<<"Enter the value of second mumber: ";
        cin>>data;
     }
     friend void sum(First,Second);
};

void sum(First o1 , Second o2){
    cout<<"The sum of two numbers of different classes is : "<<o1.num+o2.data<<endl;
}

int main(){
    First obj1;
    Second obj2;
    obj1.getdata(5);
    obj2.getdata();
    sum(obj1 , obj2);
    return 0;
}
