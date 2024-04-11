#include <iostream>
#include <string>

const int MAX_STUDENTS = 5;

struct Student {
    std::string name;
    int marks;
};

int main() {
    Student students[MAX_STUDENTS];

    // Store student information
    for (int i = 0; i < MAX_STUDENTS; i++) {
        std::cout << "Enter the name of student " << i + 1 << ": ";
        std::getline(std::cin, students[i].name);

        std::cout << "Enter the marks obtained by student " << i + 1 << ": ";
        std::cin >> students[i].marks;

        // Ignore the newline character after entering marks
        std::cin.ignore();
    }

    // Retrieve and display student information
    std::cout << "\nStudent Information:\n";
    for (int i = 0; i < MAX_STUDENTS; i++) {
        std::cout << "Name: " << students[i].name << "\tMarks: " << students[i].marks << std::endl;
    }

    return 0;
}

