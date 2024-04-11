#include <iostream>

// Function to calculate the current monthly salary after applying an increment
double calculateCurrentSalary(double salary, double increment = 0.0) {
    return salary + (salary * increment / 100);
}

int main() {
    // Salaries in year 2009
    double ceoSalary = 35000;
    double infoOfficerSalary = 25000;
    double sysAnalystSalary = 24000;
    double programmerSalary = 18000;

    // Salary increments for year 2010
    double ceoIncrement = 9;
    double infoOfficerIncrement = 10;
    double sysAnalystIncrement = 12;
    double programmerIncrement = 12;

    // Calculate current salaries after applying increments
    double currentCeoSalary = calculateCurrentSalary(ceoSalary, ceoIncrement);
    double currentInfoOfficerSalary = calculateCurrentSalary(infoOfficerSalary, infoOfficerIncrement);
    double currentSysAnalystSalary = calculateCurrentSalary(sysAnalystSalary, sysAnalystIncrement);
    double currentProgrammerSalary = calculateCurrentSalary(programmerSalary, programmerIncrement);

    // Display the current monthly salaries
    std::cout << "Current Monthly Salaries (Year 2010):\n";
    std::cout << "Chief Executive Officer: Rs. " << currentCeoSalary << "/m\n";
    std::cout << "Information Officer: Rs. " << currentInfoOfficerSalary << "/m\n";
    std::cout << "System Analyst: Rs. " << currentSysAnalystSalary << "/m\n";
    std::cout << "Programmer: Rs. " << currentProgrammerSalary << "/m\n";

    return 0;
}

