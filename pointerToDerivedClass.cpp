#include<iostream>
using namespace std;
class base{
    public:
    int varB;
    void display(){
        cout<<"Displaying base class "<<varB<<endl;
    }
};
class derived:public base{
    public:
    int varD;
    void display(){
        cout<<"Displaying derived class "<<varB<<endl;
        cout<<"Displaying derived class "<<varD<<endl;
    }
};
int main(){
    base * bpointer;    //base class pointer
    base objb;          //base class object

    derived *dpointer;  //derived class pointer
    derived objd;       //derived class object

    // bpointer = &objb;   //base pointer pointing object of base class
    bpointer = &objd;   //base pointer pointing object of derived class
    bpointer->varB=34;
    bpointer->display();    //invokes the function of base class since base pointer is used

    dpointer= &objd;    //derived pointer pointing object of derived class
    dpointer->varB=32;
    dpointer->varD=36;
    dpointer->display();    //invokes the function of derived class since derived pointer is used
 
    return 0;

}
