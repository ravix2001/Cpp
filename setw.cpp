#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=5, b=44, c=56789;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
    cout<<endl;

    cout<<"The value of a is "<<setw(5)<<a<<endl;
    cout<<"The value of b is "<<setw(5)<<b<<endl;
    cout<<"The value of c is "<<setw(5)<<c<<endl;
    cout<<endl;

    cout<<"The value of a is "<<setw(7)<<a<<endl;
    cout<<"The value of b is "<<setw(7)<<b<<endl;
    cout<<"The value of c is "<<setw(7)<<c<<endl;
    cout<<endl;

    cout<<"The value of a is "<<setw(7)<<setfill('0')<<a<<endl;
    cout<<"The value of b is "<<setw(7)<<setfill('0')<<b<<endl;
    cout<<"The value of c is "<<setw(7)<<setfill('0')<<c<<endl;
    cout<<endl;

    return 0;
}
