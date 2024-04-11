/*Assume that you want to check whether the number is prime or not. Write a program that asks for numbers repeatedly. When it finishes checking a number the program asks if the user wants to do another calculation.The response can be 'y' or 'n'. Don't forget to use the object-oriented concept.*/
#include <iostream>
using namespace std;

class PrimeChecker {
public:
    void checkPrime() {
        do {
            cout << "Enter a number: ";
            cin >> number;
            if (isPrime(number))
                cout << number << " is a prime number." << endl;
            else
                cout << number << " is not a prime number." << endl;
                cout << "Do you want to do another calculation? (y/n): ";
                cin >> choice;
        } while (choice == 'y' || choice == 'Y');
    }

private:
        char choice;
        int number;
    bool isPrime(int n) {
        if (n <= 1)
            return false;
        for (int i = 2; i <= n/2 ; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
};

int main() {
    PrimeChecker primeChecker;
    primeChecker.checkPrime();
    return 0;
}
