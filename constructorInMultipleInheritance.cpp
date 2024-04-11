//Its almost the same, all the base class's constructors are called inside derived class's constructor, in the same order in which they are inherited.

#include<iostream>
using namespace std;
class base1{         //base class
    public:
    base1(){
        cout<<"No-argument constructor of the 1st base class"<<endl;
    }
};
class base2{         //base class
    public:
    base2(){
        cout<<"No-argument constructor of the 2nd base class"<<endl;
    }
};
class derived : public base1 , public base2{          //publicly derived class
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
