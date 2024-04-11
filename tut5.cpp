#include<iostream>
using namespace std;
class obj{
    static int count;
    public:
        obj(){
            count++;
        }
        static void display(){
            cout<<"No of objects created : "<<count<<endl;
        }
};
int obj::count;
int main(){
    obj o1,o2,o3;
    obj::display();
    return 0;
}
