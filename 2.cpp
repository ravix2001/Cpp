#include <iostream>
#include <string>

int main() {
    std::string sentence = "idea without execution is worthless";
    char target = 'C';
    const char* ptr = sentence.c_str();
    int position = -1;

    while (*ptr != '\0') {
        if (*ptr == target) {
            position = ptr - sentence.c_str();
            break;
        }
        ptr++;
    }

    if (position != -1) {
        std::cout << "The character '" << target << "' is found at position " << position << " in the sentence." << std::endl;
    } else {
        std::cout << "The character '" << target << "' is not found in the sentence." << std::endl;
    }

    return 0;
}
