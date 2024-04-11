#include<iostream>
using namespace std;
int main()
{
    int a=47;
    int *b;         //we can define the pointer by this way also
    int **c=&b;     //pointer that points another pointer
    b=&a;           //we can define the pointer by this way also
    cout<<"The address of a is "<<b<<endl;
    cout<<"The value at address b is "<<*b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value at (value at c) is "<<**c<<endl;
    return 0;
}
