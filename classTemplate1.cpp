#include<iostream>
using namespace std;
template<class T>
class mypair{
    private:
    T a,b;
    public:
    mypair(T first , T second){        //constructor
        a=first;
        b=second;
    }
    T getMax();
};
template<class T>
T mypair<T>::getMax()
{
    T res;
    res=a>b?a:b;
    return res;
}
int main(){
    mypair <int> obj(100,75);       //<int> is optional
    cout<<obj.getMax();
    return 0;
}