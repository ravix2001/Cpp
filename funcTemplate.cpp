#include<iostream>
using namespace std;
template<class T>
T sum(T a , T b){
    return (a+b);
}
int main(){
    cout<<"Sum of integer numbers is "<<sum(5,8)<<endl;
    cout<<"Sum of floating numbers is "<<sum(3.44,5.55)<<endl;
    int i=5 , j=6 , k ;
    float p=5.55 , q=6.3 , r ;
    k=sum(i,j);
    r=sum(p,q);
    cout<<"Sum of integer numbers is "<<k<<endl;
    cout<<"Sum of floating numbers is "<<r<<endl;
    return 0;
}