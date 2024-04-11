//Destructor execute in the reverse order of constructor
#include<iostream>
using namespace std;
class Book{
    protected:
        int number;
        double price;
    public:
        Book(int a , double b){
            number=a;
            price=b;
        }
        ~Book(){
            cout<<"Base class destructor"<<endl;
        }
};
class SubClass:public Book{
    protected:
        int pages;
    public:
        SubClass(int p , double q , int r):Book(p,q){
            pages=r;
        }
        ~SubClass(){
            cout<<"SubClass destructor"<<endl;
        }
};
class SubSubClass:public SubClass{
    protected:
        double discount;
    public:
        SubSubClass(int u , double v , int w , double x):SubClass(u,v,w){
            discount=x;
        }
        ~SubSubClass(){
            cout<<"\n\nSubSubClass destructor"<<endl;
        }
        void display(){
            cout<<"\nNumber = "<<number;
            cout<<"\nPrice = "<<price;
            cout<<"\nPages = "<<pages;
            cout<<"\nDiscount = "<<discount;
            cout<<"\nTotal = "<<price-discount;
        }
};
int main(){
    SubSubClass obj(1,50.0,500,0.5);
    obj.display();
    return 0;
}
