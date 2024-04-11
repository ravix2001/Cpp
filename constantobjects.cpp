#include <iostream>
using namespace std;

class Coordinate{
        int x;
        int y;
    public:
        Coordinate(int a, int b) {
            x = a;
            y = b;
        }
    void get_coordinate() {
        cout << "Enter the xcoordinate:";
        cin >> x;
        cout << "Enter the ycoordinate:";
        cin >> y;
    }
    void show_coordinate() const { //constant member function
        cout << "xcoordinate:" << x <<endl;
        cout << "ycoordinate:" << y <<endl;
    }
    void display() {
        cout << "xcoordinate:" << x <<endl;
        cout << "ycoordinate:" << y <<endl;
    }
};
int main(){
    Coordinate c1(0,0);
    c1.get_coordinate();
    c1.show_coordinate();
    c1.display();
    const Coordinate c2(10,20); //constant member function
    //c2.get_coordinate()
    //Invalid:get_coordinate() modifies the member of Coordinate class
    c2.show_coordinate();
    //Valid: show_coordinate() is constant member function
    //c2.display();
    //Invalid: constant object can only invoke constant member function
    return 0;
}