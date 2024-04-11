/*Write a program that has a class with a dynamically allocated character array as its data member. One object should contain "Engineers are" and another should contain " Creatures of logic". Member function join() should concatenate two strings by passing two objects as arguments. Display the concatenated string through a member function. Use constructors to allocate and initialize the data member. Also, write a destructor to free the allocated memory for the character array. Make your own function for the concatenation of two strings.*/
#include <iostream>
#include <cstring> // For string manipulation
using namespace std;

class StringConcatenator {
private:
    char* str;

public:
    StringConcatenator(const char* initialStr) {
        int length = strlen(initialStr) + 1;
        str = new char[length];
        strcpy(str, initialStr);
    }

    ~StringConcatenator() {
        delete[] str;
    }

    void join(const StringConcatenator& obj1, const StringConcatenator& obj2) {
        int length = strlen(obj1.str) + strlen(obj2.str) + 1;
        delete[] str;
        str = new char[length];
        strcpy(str, obj1.str);
        strcat(str, obj2.str);
    }

    void display() {
        cout << "Concatenated String: " << str << endl;
    }
};

// Custom function to concatenate two strings
char* concatenateStrings(const char* str1, const char* str2) {
    int length = strlen(str1) + strlen(str2) + 1;
    char* result = new char[length];
    strcpy(result, str1);
    strcat(result, str2);
    return result;
}

int main() {
    StringConcatenator obj1("Engineers are");
    StringConcatenator obj2(" Creatures of logic");

    StringConcatenator obj3("");
    obj3.join(obj1, obj2);
    obj3.display();

    char* customConcatenatedStr = concatenateStrings("Engineers are", " Creatures of logic");
    cout << "Custom Concatenated String: " << customConcatenatedStr << endl;
    delete[] customConcatenatedStr;

    return 0;
}
