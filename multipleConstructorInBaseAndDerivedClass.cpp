#include<iostream>
using namespace std;
class base{         //base class
    public:
    base(){
        cout<<"No-argument constructor of the base class"<<endl;
    }
    base(int a){
        cout<<"One argument constructor of the base class"<<endl;
    }
};
class derived:public base{          //publicly derived class
    public:
    derived(){
        cout<<"No-argument constructor of the derived class"<<endl;
    }
    derived(int a){
        cout<<"One argument constructor of the derived class"<<endl;
    }
};
int main(){
    derived obj1, obj2(3);
    return 0;
}
