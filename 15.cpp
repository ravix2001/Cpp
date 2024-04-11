/*Assume that an object represents an employee report that contains information like employee id, total bonus, total overtime in a particular year. Use an array of objects to represent n employees' reports. Write a program that displays the report. Use setpara() member function to set report attributes by passing the arguments and member function displayreport() to show the report according to the parameter passed. Display the report in the following format.

An employee with ... ... ... has received Rs ... ... ...as a bonus

and

had worked ... ... ... hours as overtime in the year ... ... ...*/

#include <iostream>
#include <string>

using namespace std;

class EmployeeReport {
private:
    string employeeId;
    double totalBonus;
    int totalOvertime;
    int year;

public:
    void setPara(const string& id, double bonus, int overtime, int reportYear) {
        employeeId = id;
        totalBonus = bonus;
        totalOvertime = overtime;
        year = reportYear;
    }

    void displayReport() {
        cout << "An employee with ID " << employeeId << " has received Rs. " << totalBonus
             << " as a bonus" << endl;
        cout << "and" << endl;
        cout << "had worked " << totalOvertime << " hours as overtime in the year " << year << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    EmployeeReport* reports = new EmployeeReport[n];

    for (int i = 0; i < n; i++) {
        string id;
        double bonus;
        int overtime, year;
        cout << "Enter details for employee " << (i + 1) << ":" << endl;
        cout << "Employee ID: ";
        cin >> id;
        cout << "Total bonus: ";
        cin >> bonus;
        cout << "Total overtime: ";
        cin >> overtime;
        cout << "Year: ";
        cin >> year;

        reports[i].setPara(id, bonus, overtime, year);
    }

    cout << endl << "Employee Reports:" << endl;

    for (int i = 0; i < n; i++) {
        cout << endl << "Employee Report " << (i + 1) << ":" << endl;
        reports[i].displayReport();
    }

    delete[] reports;

    return 0;
}
