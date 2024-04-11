/*
Program to create a function which takes two arguments and returns
the minimum value. Call the function and assign it to a variable.
Again call this function and assign the value ­ 100. Trace the output
*/
#include<iostream>
using namespace std;

int &minimum(int &a, int &b){
   return(a<b ? a:b);
}
/*
int &minimum(int a, int b){
return (a<b ? a:b);
}
//this function gives an error as a and b have local scope
*/
int main()
{
    int a, b, min;
    cout<<"Enter any two numbers: ";
    cin>>a>>b;
    cout<<"\nvalue of a "<<a;
    cout<<"\nvalue of b "<<b;
    cout<<"\nminimum value of a and b = "<<minimum(a,b);

    minimum(a,b)=100;
    cout<<"\nvalue of a "<<a;
    cout<<"\nvalue of b "<<b;
    return 0;
}

