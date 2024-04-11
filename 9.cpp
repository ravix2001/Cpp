#include <iostream>

// Inline function to calculate the net payment after deducting income tax
inline double calculateNetPayment(double salary) {
    const double incomeTaxRate = 0.1; // 10% income tax rate
    return salary - (salary * incomeTaxRate);
}

int main() {
    double salary;

    std::cout << "Enter the employee's salary: Rs.";
    std::cin >> salary;

    double netPayment = calculateNetPayment(salary);

    std::cout << "Net payment to the employee: Rs." << netPayment << std::endl;

    return 0;
}

