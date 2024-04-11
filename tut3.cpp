#include<iostream>
using namespace std;
int main()
{
    char name[50];
    int roll;
    char address[100];
    cout<<"Enter your name : ";
    cin.getline(name,50);
    cout<<"Enter your roll number : ";
    cin>>roll;
    cin.ignore();
    cout<<"Enter your address : ";
    cin.getline(address,100); 
    cout<<"Your name is "<<name<<endl;
    cout<<"Your roll number is "<<roll<<endl;
    cout<<"Your address is "<<address<<endl;
    return 0;
}
