#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int *b=&a;                                                            //pointer
    cout<<"The value of a is "<<a<<endl;
    cout<<"The address of a is "<<&a<<endl;                               //& --->address of a
    cout<<"The address of a using pointer is "<<b<<endl;                  //points the address of a
    cout<<"The value of a or the value at address b is "<<*b<<endl;       //* --->dereference operator
    return 0;
}
