#include<iostream>
using namespace std;
class A{
    public:
    string name;
};
class B{
    public:
    int age;
};
class C : public A , public B
{
    public:
    void show(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
int main(){
    C c;
    c.name="Ravi Pandit";
    c.age=22;
    c.show();
    return 0;
}