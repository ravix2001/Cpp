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
    friend Complex operator +(Complex , int);
};

Complex operator +(Complex c, int a)
{
    Complex temp;
    temp.r = c.r + a;
    temp.m = c.m + a;
    return temp;
}

int main()
{
    Complex c1, c2;
    c1.input();
    c2 = c1 + 2;
    c2.display();
    return 0;
}
