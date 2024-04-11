#include<iostream>
using namespace std;
class base{
    public:
    int varB;
    virtual void display(){
        cout<<"Displaying base class "<<varB<<endl;
    }
};
class derived:public base{
    public:
    int varD=34;
    void display(){
        cout<<"Displaying derived class "<<varB<<endl;
        cout<<"Displaying derived class "<<varD<<endl;
    }
};
int main(){
    base * bpointer;    //base class pointer
    //base objB;
    derived objD;

    bpointer = &objD;
    bpointer->varB=33;
    bpointer->display();    //function of derived class will be invoked since the same function is made virtual in base class, if not made virtual then the function of base class will be invoked

//If you want to invoke the function of base class use the method below: 
    // bpointer = &objB;
    // bpointer->varB=50;
    // bpointer->display();
    return 0;
}