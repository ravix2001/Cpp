#include<iostream>
using namespace std;

class item{
    static int count;
    int number;
    public:
        void getdata(int a){
            number=a;
            count++;
        }
        void showdata(){
            cout<<number<<endl;
        }
        void getcount(){
            cout<<"count: ";
            cout<<count<<endl;
        }
};

int item::count;    //definition of static variable

int main(){
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();
    a.getdata(100);
    b.getdata(200);
    c.getdata(300);
    a.showdata();
    b.showdata();
    c.showdata();
    cout<<"After reading data"<<endl;
    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}