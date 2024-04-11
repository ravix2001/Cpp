#include<iostream>
using namespace std;
template<class T1=int, class T2=float>
class xyz{
    public:
    T1 a;
    T2 b;
    xyz(T1 x, T2 y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        //cout<<"The value of c is "<<c<<endl;
    }
};
int main(){
    xyz<> obj1(4 , 5.8);     //default parameter as already mentioned above in template 
    obj1.display();
    cout<<endl;
    xyz<int,char> obj2(45, 'R');
    obj2.display();
    return 0;
}