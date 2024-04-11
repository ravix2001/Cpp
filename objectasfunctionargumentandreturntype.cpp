#include <iostream>
using namespace std;
class complex{
    public:
    int r , i ;
    void input() {
    cout << "Enter real part: ";
    cin >> r;
    cout << "Enter imaginary part: ";
    cin >> i;
    }
    void display() {
    cout << r << "+" << i <<"i" << endl;
    }
};
complex add(complex x, complex y) {
    complex t;
    t.r = x.r + y.r;
    t.i = x.i + y.i;
    return t;
}
int main(){
    complex c1,c2,c3;
    c1.input();
    c2.input();
    c3 = add(c1,c2);
    cout << "The sum is: ";
    c3.display();
    return 0;
}
