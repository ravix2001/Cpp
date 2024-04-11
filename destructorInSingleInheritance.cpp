//Constructor is invoked from base class to derived class but Destructor is invoked from derived class to base class i.e. destructor execute in the reverse order of constructor
#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"Base class constructed"<<endl;
    }
    ~base(){
        cout<<"Base class destructed"<<endl;
    }
};
class derived:public base{
    public:
    derived(){
        cout<<"Derived class constructed"<<endl;
    }
    ~derived(){
        cout<<"Derived class destructed"<<endl;
    }
};
int main(){
    derived obj;
    return 0;
}
