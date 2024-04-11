#include<iostream>
using namespace std;

class A{
        int a;
    public:
        void setdata(int a){
            // a = a ;   will give garbage value inorder to access the current object this pointer is used
            this->a = a ;
        }
        void showdata(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    A a;
    a.setdata(5);
    a.showdata();
    return 0;
}