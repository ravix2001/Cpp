#include<iostream>
using namespace std;

inline int product(int a , int b){
    return a*b;
}
//inline function is used to decrease the exectuion time , it replaces the function product(a,b) with its value i.e. a*b during compiling time so it becomes fast
//but every functions cannot be made inline because it ocuupies all the cache memory and becomes more time consuming
int main()
{
    int a , b;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;

    return 0;
}
