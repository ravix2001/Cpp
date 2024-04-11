#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

struct Student {
    std::string name;
    int rollNo;
    std::string address;
    std::string phoneNumber;
};

bool compareByName(const Student& a, const Student& b) {
    return a.name < b.name;
}

void enterStudentInfo(std::vector<Student>& students) {
    std::string name, address, phoneNumber;
    int rollNo;

    std::cout << "Enter student information (Enter 'quit' for name to exit):\n";
    while (true) {
        std::cout << "Name: ";
        std::getline(std::cin, name);

        if (name == "quit") {
            break;
        }

        std::cout << "Roll No: ";
        std::cin >> rollNo;
        std::cin.ignore();  // Ignore newline character

        std::cout << "Address: ";
        std::getline(std::cin, address);

        std::cout << "Phone Number: ";
        std::getline(std::cin, phoneNumber);

        Student student;
        student.name = name;
        student.rollNo = rollNo;
        student.address = address;
        student.phoneNumber = phoneNumber;

        students.push_back(student);
        std::cout << "Student information saved.\n\n";
    }
}

void saveStudentInfo(const std::vector<Student>& students) {
    std::ofstream file("student_info.txt");
    if (!file) {
        std::cerr << "Failed to open file for writing.\n";
        return;
    }

    for (const auto& student : students) {
        file << student.name << "\n";
        file << student.rollNo << "\n";
        file << student.address << "\n";
        file << student.phoneNumber << "\n";
    }

    file.close();
    std::cout << "Student information saved to file.\n";
}

void retrieveStudentInfo(std::vector<Student>& students) {
    std::ifstream file("student_info.txt");
    if (!file) {
        std::cerr << "Failed to open file for reading.\n";
        return;
    }

    students.clear();

    std::string name, address, phoneNumber;
    int rollNo;

    while (std::getline(file, name)) {
        file >> rollNo;
        file.ignore();  // Ignore newline character

        std::getline(file, address);
        std::getline(file, phoneNumber);

        Student student;
        student.name = name;
        student.rollNo = rollNo;
        student.address = address;
        student.phoneNumber = phoneNumber;

        students.push_back(student);
    }

    file.close();
    std::cout << "Student information retrieved from file.\n";
}

void sortStudentInfo(std::vector<Student>& students) {
    std::sort(students.begin(), students.end(), compareByName);
    std::cout << "Student information sorted alphabetically by name.\n";
}

void displayStudentInfo(const std::vector<Student>& students) {
    std::cout << "Student Information:\n";
    for (const auto& student : students) {
        std::cout << "Name: " << student.name << "\n";
        std::cout << "Roll No: " << student.rollNo << "\n";
        std::cout << "Address: " << student.address << "\n";
        std::cout << "Phone Number: " << student.phoneNumber << "\n";
        std::cout << "\n";
    }
}

int main() {
    std::vector<Student> students;

    // Enter student information
    enterStudentInfo(students);

    // Save student information to file
    saveStudentInfo(students);

    // Retrieve student information from file
    retrieveStudentInfo(students);

    // Sort student information alphabetically by name
    sortStudentInfo(students);

    // Display student information
    displayStudentInfo(students);

    return 0;
}

