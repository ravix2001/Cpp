#include <iostream>
using namespace std;
class ABC;
class XYZ{
        int x;
    public:
        friend class ABC;
};
class ABC{
        int a;
    public:
        void getdata(XYZ &o1) {
            cout << "Enter the value of a:";
            cin >> a;
            cout << "Enter the value of x:";
            cin >> o1.x;
        }   
        void sum(XYZ &o1) {
            cout << "The sum is:" << a + o1.x << endl;
        }
        void product(XYZ &o1) {
            cout << "The product is:" << a * o1.x << endl;
        }
};
int main(){
    ABC obj1;
    XYZ obj2;
    obj1.getdata(obj2);
    obj1.sum(obj2);
    obj1.product(obj2);
    return 0;
}