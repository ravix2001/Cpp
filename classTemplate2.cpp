#include<iostream>
using namespace std;
template<class T1, class T2, class T3>
class record{
    T1 a;
    T2 b;
    T3 c;
    public:
    record(T1 x, T2 y, T3 z){
        a=x;
        b=y;
        c=z;
    }
    void show();
    // void show(){
    //     cout<<a<<endl<<b<<endl<<c<<endl;
    // }
};
template<class T1, class T2, class T3>
void record<T1, T2, T3>::show(){
    cout<<a<<endl<<b<<endl<<c<<endl;
}
int main(){
    record<int,char,float> r1(10,'R',10.45);
    record<float,char,int> r2(4.55,'P',45);
    r1.show();
    r2.show();
    return 0;
}