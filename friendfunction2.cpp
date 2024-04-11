#include <iostream>
using namespace std;
class B;
class A
{
int a;
public:
void input(){
cout << "Enter the value of a : ";
cin >> a ;
}
void mult(B t);
};
class B
{
int b;
public:
void input(){
cout << "Enter the value of b: ";
cin >> b;
}
friend void A::mult(B t);
};
void A::mult(B t){
cout << a << "*" << t.b << "=" << a*t.b << endl;
}
main()
{
A a;
B b;
a.input();
b.input();
a.mult(b);
return 0;
}