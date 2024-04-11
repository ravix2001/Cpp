#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=0;i<=10;i++)
    {
        if(i==2)
        {
            continue;   //the loop breaks at the given condition and continues further i.e. value is bypassed i.e. not printed
        }
        cout<<i<<endl;
    }
    return 0;
}

