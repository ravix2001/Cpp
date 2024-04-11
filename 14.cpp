/*Write a program with classes to represent a circle, rectangle, and triangle. Each class should have data members to represent the actual objects and member functions to read and display objects, find perimeter and area of the objects, and other useful functions. Use the classes to create objects in your program.*/
#include <iostream>
#include <cmath>

using namespace std;

class Circle {
private:
    double radius;

public:
    void read() {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }

    void display() {
        cout << "Circle with radius " << radius << endl;
    }

    double getPerimeter() {
        return 2 * M_PI * radius;
    }

    double getArea() {
        return M_PI * pow(radius, 2);
    }
};

class Rectangle {
private:
    double length;
    double width;

public:
    void read() {
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
    }

    void display() {
        cout << "Rectangle with length " << length << " and width " << width << endl;
    }

    double getPerimeter() {
        return 2 * (length + width);
    }

    double getArea() {
        return length * width;
    }
};

class Triangle {
private:
    double side1;
    double side2;
    double side3;

public:
    void read() {
        cout << "Enter the lengths of the three sides of the triangle: ";
        cin >> side1 >> side2 >> side3;
    }

    void display() {
        cout << "Triangle with sides " << side1 << ", " << side2 << ", " << side3 << endl;
    }

    double getPerimeter() {
        return side1 + side2 + side3;
    }

    double getArea() {
        // Using Heron's formula to calculate the area of the triangle
        double s = getPerimeter() / 2; // semiperimeter
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
};

int main() {
    Circle circle;
    circle.read();
    circle.display();
    cout << "Perimeter of the circle: " << circle.getPerimeter() << endl;
    cout << "Area of the circle: " << circle.getArea() << endl;

    cout << endl;

    Rectangle rectangle;
    rectangle.read();
    rectangle.display();
    cout << "Perimeter of the rectangle: " << rectangle.getPerimeter() << endl;
    cout << "Area of the rectangle: " << rectangle.getArea() << endl;

    cout << endl;

    Triangle triangle;
    triangle.read();
    triangle.display();
    cout << "Perimeter of the triangle: " << triangle.getPerimeter() << endl;
    cout << "Area of the triangle: " << triangle.getArea() << endl;

    return 0;
}
