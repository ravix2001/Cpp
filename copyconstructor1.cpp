#include<iostream>
using namespace std;

class number{
    int a;
    public:
        number(){
            a=0;
        }
        number(int num){
            a=num;
        }
        /*When no copy constructor is made, compiler makes its own copy constructor called default constructor*/
        number(number &obj){        //copy constructor
            cout<<"Copy constructor is called!!!"<<endl;
            a=obj.a;
        }
        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }
};

int main(){
    number n1,n2,n3(8),n9;
    n1.display();
    n2.display();
    n3.display();
    cout<<endl;
    number n4(n1);      //implicit
    n4.display();
    number n5 = n2;     //explicit
    n5.display();
    number n6(n3);
    n6.display();
    n9=n1;          //copy constructor not called
    return 0;
}