# include <iostream>
using namespace std;
class Complex{
        int r;
    public:
    Complex (int r){
        this -> r=r;
    }
    void input (){
        cout << "Enter the value of r: ";
        cin >> this -> r;
    }
    void display(){
        cout <<"Value of r: " << r << endl;
    }
    Complex add( Complex C1, Complex C2){
        r= C1.r + C2.r;
        return (* this);
    }
};
int main(){
    Complex a1(1), a2(2), a3(0), a4(0);
    a1.input();
    a2.input();
    a4 = a3.add(a1, a2);
    a3.display();
    a4.display();
    return 0;
}
