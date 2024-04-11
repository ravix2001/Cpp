//sorting of an array elements with class template
#include <iostream>
using namespace std;
template <class T>
class Array
{
    T a[5];

public:
    void input()
    {
        cout << "enter five numbers " << endl;
        for (int i = 0; i < 5; i++)
            cin >> a[i];
    }
    void display()
    {
        cout << "numbers in ascending order" << endl;
        for (int i = 0; i < 5; i++)
            cout << a[i] << endl;
        cout << endl;
    }
    void sort();
};
template <class T>
void Array<T>::sort()
{
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 0; j <= i-1; j++)
        {
            if (a[j] > a[j + 1])
            {
                T tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}
int main()
{
    Array<int> a1;
    a1.input();
    a1.sort();
    a1.display();
    Array<float> a2;
    a2.input();
    a2.sort();
    a2.display();
    return 0;
}
