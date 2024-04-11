#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Before swapping : "<<a<<"\t"<<b<<endl;
    c=b;
    b=a;
    a=c;
    cout<<"After swapping : "<<a<<"\t"<<b;
    return 0;
}
