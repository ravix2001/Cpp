#include<iostream>
using namespace std;

class complex{
    int r,m;
    public:
    void input(){
        cout<<"Enter real and imaginary part : ";
        cin>>r>>m;
    }
    void display(){
        cout<<r<<"+"<<m<<"i"<<endl;
    }
    friend complex operator --(complex &);
};
complex operator --(complex &c){
    complex temp;
    temp.r=c.r-1;
    temp.m=c.m-1;
    return temp;
}

int main(){
    complex c1, c2;
    c1.input();
    c2=--c1;
    c2.display();
    return 0;
}
