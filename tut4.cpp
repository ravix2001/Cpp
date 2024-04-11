#include<iostream>
using namespace std;
namespace fruit_name
{
    void callingJack()
    {
        cout<<"Hey! you called Jack. It's a fruit."<<endl;
    }
}
namespace person_name
{
    void callingJack()
    {
        cout<<"Hey! you called Jack. It's a person."<<endl;
    }
}
int main()
{
    person_name::callingJack();
    fruit_name::callingJack();
    return 0;
}
