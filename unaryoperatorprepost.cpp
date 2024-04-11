#include<iostream>
using namespace std;
class counter{
    private:
        unsigned int count;
    public:
        counter(){
            count=0;
        }
        int getcount(){
            return count;
        }
        void operator++(){              //prefix    ++a
            count++;
        }
        void operator++(int){           //postfix   a++
            count++;
        }
};
int main(){
    counter c1,c2;
    cout<<"c1="<<c1.getcount()<<endl;
    cout<<"c2="<<c2.getcount()<<endl;
    c1++;
    c2++;
    ++c2;
    cout<<"c1="<<c1.getcount()<<endl;
    cout<<"c2="<<c2.getcount()<<endl;
    return 0;
}
