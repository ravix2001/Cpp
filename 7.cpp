#include <iostream>

namespace Square {
    int num;

    int fun(int x) {
        return x * x;
    }
}

namespace Cube {
    int num;

    int fun(int x) {
        return x * x * x;
    }
}

int main() {
    Square::num = 2;
    Cube::num = 3;

    int squareOfNumInCube = Square::fun(Cube::num);
    int cubeOfNumInSquare = Cube::fun(Square::num);

    std::cout << "Cube of Square::num: " << squareOfNumInCube << std::endl;
    std::cout << "Square of Cube::num: " << cubeOfNumInSquare << std::endl;

    return 0;
}
