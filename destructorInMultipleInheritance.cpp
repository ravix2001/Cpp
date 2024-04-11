//Destructor execute in the reverse order of constructor
#include<iostream>
using namespace std;
class base1{
    public:
    base1(){
        cout<<"base1 class (constructor)"<<endl;
    }
    ~base1(){
        cout<<"base1 class (destructor)"<<endl;
    }
};
class base2{
    public:
    base2(){
        cout<<"base2 class (constructor)"<<endl;
    }
    ~base2(){
        cout<<"base2 class (destructor)"<<endl;
    }
};
class derived : public base1 , public base2 {
    public:
    derived(){
        cout<<"Derived class (constructor)"<<endl;
    }
    ~derived(){
        cout<<"\nDerived class (destructor)"<<endl;
    }
};
int main(){
    derived obj;
    return 0;
}
