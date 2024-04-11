#include <iostream>
using namespace std;
class Constructor
{
    int r, m;

public:
    Constructor()
    {
        cout << "Invoking default constructor" << endl;
        r = m = 0;
    }
    Constructor(int x, int y)
    {
        cout << "Invoking parameterized constructor" << endl;
        r = x;
        m = y;
    }
    Constructor(Constructor &T1)
    {
        cout << "Invoking copy constructor" << endl;
        r = T1.r + 1;
        m = T1.m + 1;
    }
    void display()
    {
        cout << r << "+" << m << "i" << endl;
    }
};
int main()
{
    Constructor C1;
    Constructor C2(1, 2);
    Constructor C4(C1);  // implicit
    Constructor C5 = C2; // explicit
    C4.display();
    C5.display();
    C4 = C2; // this does not invoke the copy constructor
    C4.display();
    return 0;
}