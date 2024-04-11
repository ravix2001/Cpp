#include<iostream>
using namespace std;

class complex{
    int a , b ;
    public:
        //complex(void);          //constructor declaration
        int sum();
        void print(){
            cout<<"The sum of "<<a<<" and "<<b <<" is "<<sum();
        }
};

/*complex::complex(void){         //constructor defined       //default constructor
    a=10;
    b=5;
}*/
//If no constructor is defined, the compiler will automatically supply a default constructor.
complex::sum(){
    return a+b;
}

int main(){
    complex c;
    c.print();
    return 0;
}
