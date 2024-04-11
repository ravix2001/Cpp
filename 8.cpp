#include <iostream>

void setLargerTemperature(double &temp1, double &temp2) {
    double userValue;

    std::cout << "Enter a value: ";
    std::cin >> userValue;

    if (temp1 > temp2) {
        temp1 = userValue;
    } else {
        temp2 = userValue;
    }
}

int main() {
    double temperature1, temperature2;

    std::cout << "Enter the first temperature: ";
    std::cin >> temperature1;

    std::cout << "Enter the second temperature: ";
    std::cin >> temperature2;

    setLargerTemperature(temperature1, temperature2);

    std::cout << "Updated temperatures: " << temperature1 << ", " << temperature2 << std::endl;

    return 0;
}

