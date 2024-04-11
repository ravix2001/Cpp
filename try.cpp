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
            if(b!=0)
            {
                cout<<"Result = "<<a/b<<endl;
            }
            else
            {
                throw(b);
            }
        }
        catch(float b){
            cout<<"Cannot be divided by 0"<<endl;
        }
    }
};
int main(){
    divide obj;
    obj.input();
    obj.display();
    return 0;
}