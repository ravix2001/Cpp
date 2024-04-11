#include<iostream>
using namespace std;

class complex{
    int r , m ;
    public:
    complex(){
        r = 0 ;
        m = 0 ;
    }
    complex(int x , int y){
        r = x ;
        m = y ;
    }
    void input(){
        cout<<"\nEnter the real and imaginary part : "<<endl;
        cin>>r>>m;
    }
    void display(){
        cout<<"\nThe sum of two complex numbers is "<<r<<" + "<<m<<"i"<<endl;
    }
    complex operator +(complex);
};

complex complex::operator +(complex obj){
    complex temp;
    temp.r = r + obj.r;
    temp.m = m + obj.m;
    return temp;
}

int main(){
    complex c1(2,4) , c2(4,6) , c3 ;
    complex c4 , c5 , c6 ;
    c3 = c1 + c2 ;
    c3.display();
    c4.input();
    c5.input();
    c6 = c4 + c5 ;
    c6.display();
    return 0;
}
