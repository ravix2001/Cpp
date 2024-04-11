#include<iostream>
using namespace std;
class divide{
    private:
    float a;
    float b;
    public:
    void input(){
        cout<<"Enter two numbers ";
        cin>>a>>b;
    }
    void display(){
        cout<<"Result = "<<a/b<<endl;
    }
};
int main(){
    divide obj;
    obj.input();
    obj.display();
    return 0;
}