#include <iostream>
using namespace std;
class complex{
    private:
        int r, i;
    public:
        void input() {
            cout << "Enter real part: ";
            cin >> r;
            cout << "Enter imaginary part: ";
            cin >> i;
        }
    friend complex add(complex x, complex y);   //friend function
    void display() {
        cout << r << "+" << i <<"i" << endl;
    }
};
complex add(complex x, complex y) {     //need a friend function to access the private data
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
