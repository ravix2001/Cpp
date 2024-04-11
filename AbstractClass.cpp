#include<iostream>
using namespace std;

class Base{
    public:
    virtual void show()=0;      //pure virtual function
};
//The above class is called abstract class since there is pure virtual function and not used for declaring objects

class Derv1 : public Base{
    public:
    void show(){
        cout<<"I am derived 1 class"<<endl;
    } 
};

class Derv2 : public Base{
    public:
    void show(){
        cout<<"I am derived 2 class"<<endl;
    } 
};

class Derv3 : public Base{
    public:
    void show(){
        cout<<"I am derived 3 class"<<endl;
    } 
};

int main(){
    Derv1 dv1;
    Derv2 dv2;
    Derv3 dv3;

    Base *bptr;     //pointer to base class

    bptr = &dv1;    //address of dv1 in pointer
    bptr->show();   //called from Derv1  since the same function in base class is made virtual

    bptr = &dv2;    //address of dv2 in pointer
    bptr->show();   //called from Derv2

    bptr = &dv3;    //address of dv3 in pointer
    bptr->show();   //called from Derv3

    return 0;
}