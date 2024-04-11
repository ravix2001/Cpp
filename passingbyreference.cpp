#include<iostream>
using namespace std;

//pass by value
void swap1(int a , int b){
    int temp=a;
    a=b;
    b=temp;
}
//pass by reference using reference variable
void swap2(int &a , int &b){
    int temp=a;
    a=b;
    b=temp;
}
//pass by reference using pointer
void swap3(int *a , int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=10 , b=20;
    swap1(a,b);
    cout<<"a="<<a<<" b="<<b<<endl;          //not swapped
    swap2(a,b);
    cout<<"a="<<a<<" b="<<b<<endl;          //swapped
    swap3(&a,&b);
    cout<<"a="<<a<<" b="<<b<<endl;          //swapped
    return 0;
}
