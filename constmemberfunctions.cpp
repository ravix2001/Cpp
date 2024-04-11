#include<iostream>
#include<cmath>
using namespace std;

class Coordinate{
        int x;
        int y;
    public:
        void input(){
            cout << "Enter X and Y coordinates : ";
            cin >> x >> y;
        }
        void display() const;
};
void Coordinate::display() const{
    float sum;
    cout << "X Coordinate : " << x <<endl;
    cout << "Y Coordinate : " << y <<endl;
    //x++ ; //Error : Cannot change the value of variable inside the constant member function
    sum = sqrt(pow(x,2) + pow(y,2));
    cout << "Magnitude : " << sum <<endl;
}
int main(){
    Coordinate C1;
    C1.input();
    C1.display();
    return 0;
}