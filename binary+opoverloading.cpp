#include<iostream>
using namespace std;
class complex{
    private:
        float real;
        float imag;
    public:
        complex(){          //no argument constructor
            real=0;
            imag=0;
        }
        complex(float x , float y){
            real=x;
            imag=y;
        }
        complex operator+(complex);         //member function so only one argument
        void setdata(){
            cout<<"("<<real<<","<<imag<<")"<<endl;
        }
};
complex complex::operator+(complex c2){
    complex temp;
    temp.real = real + c2.real ;
    temp.imag = imag + c2.imag ;
    return temp;
}
int main(){
    complex c1(2.4,5.6),c2(5.5,7.8),c3;
    cout<<"c1=";
    c1.setdata();
    cout<<"c2=";
    c2.setdata();
    c3 = c1 + c2 ;
    cout<<"c3=";
    c3.setdata();
    return 0;
}
