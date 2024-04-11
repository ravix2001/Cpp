//concept of virtual base class in multipath inheritance
#include<iostream>
using namespace std;
class A{    //grandparent
    public:
    int i;
};
class B1 : virtual public A {       //parent 1
    public:
    int j;
};
class B2 : public virtual A {       //parent 2
    public:
    int k;
};
class C : public B1 , public B2 {       //child
    public:
    int sum;
};
int main(){
    C obj;
    obj.i=10;
    obj.j=20;
    obj.k=30;
    obj.sum=obj.i+obj.j+obj.k;
    cout<<"Value of i is : "<<obj.i<<endl;
    cout<<"Value of j is : "<<obj.j<<endl;
    cout<<"Value of k is : "<<obj.k<<endl;
    cout<<"Sum is : "<<obj.sum<<endl;
    return 0;
}
