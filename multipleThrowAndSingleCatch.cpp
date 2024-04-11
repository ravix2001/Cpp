#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the value of x ";
    cin>>x;
    try{
        if(x==0)
            throw(x);
        if(x==1)
            throw('x');
        if(x==2)
            throw(5.5);
        else
            cout<<x;
    }
    catch(...){
        cout<<"Some error occured!!!";
    }
    return 0;
}
