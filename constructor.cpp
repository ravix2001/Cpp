#include<iostream>
using namespace std;

class complex{
    int a , b ;
    public:
        complex(void);      //constructor declaration
        int sum();
        void print(){
            cout<<"The sum is : "<<sum();
        }
};

complex::complex(void){         //constructor defined
    b=5;
}

complex::sum(){
    return a+b;
}

int main(){
    complex c;
    c.print();
    return 0;
}
