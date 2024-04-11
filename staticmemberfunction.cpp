#include<iostream>
using namespace std;

class test{
    private:
        int code;
        static int count;
    public:
        void setcode(){
            code = ++count;
        }
        void showcode(){
            cout<<"object number: "<<code<<endl;
        }
        static void showcount(){        //static member function
            cout<<"count: "<<count<<endl;
        }
};
int test::count;
int main(){
    test t1 , t2 ;
    t1.setcode();
    t2.setcode();
    t2.showcount();          //generally function is called by object.function;
    test::showcount();          //but static function can be called by class::static_function;
    test t3;
    t3.setcode();
    test::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    return 0;
}