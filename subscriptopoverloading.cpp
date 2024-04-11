#include<iostream>
using namespace std;
class arr{
    int data[5];
    public:
        void input(){
            cout<<"Enter 5 integers: "<<endl;
            for(int i=0;i<5;i++)
                cin>>data[i];
        }
        int operator[](int index){
            return data[index];
        }
};
int main(){
    arr a;
    a.input();
    cout<<"Showing the elements stored in an array"<<endl;
    for(int i=0;i<5;i++)
        cout<<"data"<<"["<<i<<"]"<<"element is "<<a[i]<<endl;
    return 0;
}