#include<iostream>
using namespace std;
                                                //these are different functions with same name sum and the program automatically
int sum(int a , int b){                         //figure out with the help of arguments...  this is function overloading
    cout<<"(using two arguments) ";
    return a+b;
}

int sum(int a , int b , int c){
    cout<<"(using three arguments) ";
    return a+b+c;
}
int main()
{
    cout<<"The sum of 5 and 6 is "<<sum(5,6)<<endl;
    cout<<"The sum of 5,6 and 7 is "<<sum(5,6,7)<<endl;
    return 0;
}
