#include<iostream>
using namespace std;

class B;
class A{
    int a;
    public:
        void getdata(){
            cout<<"Enter the value of a : ";
            cin>>a;
        }
        void display(){
            cout<<"The value of a is : "<<a<<endl;
        }
        friend void swap(A & , B &);
};

class B{
    int b;
    public:
        void getdata(){
            cout<<"Enter the value of b : ";
            cin>>b;
        }
        void display(){
            cout<<"The value of b is : "<<b<<endl;
        }
        friend void swap(A & , B &);
};

void swap(A &o1 , B &o2){
    int temp=o2.b;
    o2.b=o1.a;
    o1.a=temp;
}
int main(){
    A obj1;
    B obj2;
    obj1.getdata();
    obj2.getdata();
    swap(obj1 , obj2);
    obj1.display();
    obj2.display();
    return 0;
}
