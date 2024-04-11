#include <iostream>
using namespace std;

class Complex
{
    int r, m;

public:
    void input()
    {
        cout << "Enter real and imaginary part : " << endl;
        cin >> r >> m;
    }
    void display()
    {
        cout << r << " + " << m << "i" << endl;
    }
    friend Complex operator +(Complex , Complex);
};

Complex operator +(Complex c , Complex d)
{
    Complex temp;
    temp.r = c.r + d.r;
    temp.m = c.m + d.m;
    return temp;
}

int main()
{
    Complex c1, c2, c3;
    c1.input();
    c2.input();
    c1.display();
    c2.display();
    c3=c1+c2;
    c3.display();
    return 0;
}
