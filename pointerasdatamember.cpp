#include<iostream>
using namespace std;

class pointermem{
    private:
        int *ptr;
    public:
        void setpointer(int var){
            *ptr=var;
        }
        void display(){
            cout<<*ptr;
        }
};

int main(){
    //int num=5;
    pointermem p;
    //p.setpointer(num);
    p.setpointer(5);
    p.display();
    return 0;
}