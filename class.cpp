#include<iostream>
using namespace std;

class employee{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1 , int b1 ,int c1);
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void employee :: setData(int a1 , int b1 , int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    employee ravi;
    //ravi.a = 1;      //this will show error beacause a, b, c are private and cannot be accessed directly
    // ravi.b = 2;
    // ravi.c = 3;
    ravi.d = 4;
    ravi.e = 5;
    ravi.setData(11,22,33);//the private data can be accessed by this function beacause it is defined in public
    ravi.getData();
    return 0;
}