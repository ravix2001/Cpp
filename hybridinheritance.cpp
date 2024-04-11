#include <iostream>
using namespace std;
class student
{       // base class derivation protected:
protected:
    int r_no;

public:
    void getRollno()
    {
        cout << "Enter the roll number of student: ";
        cin >> r_no;
    }

    void putRollno()
    {
        cout << "\nRoll Number: " << r_no << endl;
    }
};

class test : public student
{ // intermediate base class

protected:
    int part1 , part2;

public:
    void getMarks()
    {
        cout << "Enter the marks of student in Math 1: ";
        cin >> part1;
        cout << "Enter the marks of student in Math 2: ";
        cin >> part2;
    }

    void putMarks()
    {
        cout << "Marks Obtained: ";
        cout << "\nPart 1: " << part1;
        cout << "\nPart 2: " << part2 << endl;
    }
};

class sports
{
protected:
    int score;

public:
    void getSportsMarks()
    {
        cout << "Enter the marks in Physical Education: ";
        cin >> score;
    }

    void putSportsMarks()
    {

        cout << "Additional Marks: " << score << "\n\n";
    }
};
// derived from test and sports

class result : public test, public sports
{
    int total;

public:
    void display()
    {
        total = part1 + part2 + score;
        putRollno();
        putMarks();
        putSportsMarks();
        cout << "Total Score: " << total;
    }
};

int main()
{

    // Creating an object of class result

    result s1;

    s1.getRollno();

    s1.getMarks();

    s1.getSportsMarks();

    s1.display();

    return 0;
}
