#include<iostream>
using namespace std;
class complex{
    int r , m ;
    public:
    void input(){
        cout<<"Enter the real and imaginary part "<<endl;
        cin>>r>>m;
    }
    void display(){
        cout<<r<<" + "<<m<<" i"<<endl;
    }
    complex operator +(int);
};

complex complex::operator +(int a){
    complex temp;
    temp.r = r + a ;
    temp.m = m + a ;
    return temp;
}

int main(){
    complex c1 , c2 ;
    c1.input();
    c2 = c1 + 5 ;       //c2 = c1.operator +(5)
    c2.display();
    return 0;
}
