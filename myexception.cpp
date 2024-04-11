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
        try{
            if(a!=0||b!=0)
            {
                cout<<"Result = "<<a/b<<endl; 
            }
            else
            {
                throw(a);       //or throw(b);
            }
        }
        catch(float a){         //or catch(float b)
            cout<<"Result = Indeterminate form (0 cannot be divided by 0)"<<endl;
        }
    }
};
int main(){
    divide obj;
    obj.input();
    obj.display();
    return 0;
}