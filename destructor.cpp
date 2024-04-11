#include<iostream>
using namespace std;

class demo{
    int id;
    static int count;
    public:
        demo(){
            count++;
            id=count;
            cout<<"ID"<<id<<" object created."<<endl;
        }
        ~demo(){            //destructor
            cout<<"ID"<<id<<" object destroyed."<<endl;
        }
};
int demo::count=0;
int main(){
    demo d1, d2, d3;
    return 0; 
}