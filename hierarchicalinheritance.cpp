#include<iostream>
using namespace std;
class side{
    protected:
    int i;
    public:
    void setdata(int x){
        i=x;
    }
};
class square:public side{
    public:
    int sq(){
        return i*i;
    }
};
class cube:public side{
    public:
    int cub(){
        return i*i*i;
    }
};
int main(){
    square s;
    s.setdata(5);
    cout<<"Square is "<<s.sq()<<endl;
    cube c;
    c.setdata(4);
    cout<<"Cube is "<<c.cub()<<endl;
    return 0;
}
