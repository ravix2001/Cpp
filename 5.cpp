#include<iostream>

// Structure to hold date
struct Date {
    int month;
    int day;
    int year;
};

// Function to print date in mm/dd/yyyy format
void printDate(const Date& date) {
    std::cout << date.month << "/" << date.day << "/" << date.year << std::endl;
}

int main() {
    // Create a Date structure variable and assign values
    Date myDate;
    myDate.month = 11;
    myDate.day = 28;
    myDate.year = 2004;

    // Pass the structure to the function to print the date
    printDate(myDate);

    return 0;
}

