#include<iostream>
using namespace std;

class constructor{
    int a;
    public:
        constructor();                //default constructor
        constructor(int c){           //parameterized constructor
            a=c;
        }
        void display(){
            constructor c1;
            cout<<a<<endl;
        }
};

constructor::constructor(){
    a=0;
}

int main(){
    constructor c1;
    constructor c2(10);                 //implicit call
    constructor c3=constructor(5);      //explicit call
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
