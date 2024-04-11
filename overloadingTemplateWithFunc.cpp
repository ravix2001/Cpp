#include<iostream>
#include<string.h>
using namespace std;
template <class T>
T maxm(T a , T b){
    cout<<"Template Function"<<endl;
    return (a>b)?a:b;
}
char *maxm(char *a , char *b){      //priority
    cout<<"Normal Function"<<endl;
    char *res;
    if (strcmp(a,b)>0)
        res=a;
    else
        res=b;
    return res;
}
int main(){
    int i=10 , j=20 ;
    cout<<"maxm of integers is "<<maxm(i,j)<<endl;
    float p=8.44 , q=4.55 ;
    cout<<"maxm of float is "<<maxm(p,q)<<endl;
    char ch1='A', ch2='X';
    cout<<"maxm of characters is "<<maxm(ch1,ch2)<<endl;
    char str1[]="Mango", str2[]="Apple" ;
    cout<<"maxm of strings is "<<maxm(str1,str2)<<endl;
    return 0;
}