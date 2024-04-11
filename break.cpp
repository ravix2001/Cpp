#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=0;i<=10;i++)
    {
        if(i==2)
        {
            break;  //the loop is immediately break when the statement is true
        }
        cout<<i<<endl;
    }
    return 0;
}
