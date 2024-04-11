#include <iostream>

// Function to convert feet to inches (no arguments)
int convertToInches() {
    int feet;
    std::cout << "Enter feet: ";
    std::cin >> feet;
    return feet * 12;
}

// Function to convert feet to inches (one argument)
int convertToInches(int feet) {
    return feet * 12;
}

// Function to convert feet to inches (two arguments) using pass by reference
void convertToInches(int feet, int& inches) {
    inches = feet * 12;
}

int main() {
    int feet, inches;

    // Function call with no arguments
    inches = convertToInches();
    std::cout << "Conversion Result (No Arguments): " << inches << " inches" << std::endl;

    // Function call with one argument
    std::cout << "Enter feet: ";
    std::cin >> feet;
    inches = convertToInches(feet);
    std::cout << "Conversion Result (One Argument): " << inches << " inches" << std::endl;

    // Function call with two arguments
    std::cout << "Enter feet: ";
    std::cin >> feet;
    convertToInches(feet, inches);
    std::cout << "Conversion Result (Two Arguments): " << inches << " inches" << std::endl;

    return 0;
}

