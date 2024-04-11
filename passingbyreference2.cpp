#include<iostream>
using namespace std;

void swap3(int *a , int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=20 , b=30;
    swap3(&a,&b);
    cout<<"a="<<a<<" b="<<b<<endl;
    return 0;
}
