#include<iostream>
using namespace std;

class complex{
    int real;    
    int imag;
    public:
        complex(int x , int y) : real(x) , imag(y){
        }
        void display(){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
};
int main(){
    complex c(10,20);
    c.display();
    return 0;
}