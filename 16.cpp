/* Write a program that has a class to represent time. The class should have constructors to initialize data members hour, minute, and second to 0 and to initialize them to values passed as arguments. The class should have a member function to add time objects and return the result as a time object. There should be functions to display time in 12-hour and 24-hour format.*/
#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    Time() {
        hour = 0;
        minute = 0;
        second = 0;
    }

    Time(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }

    Time addTime(const Time& t) {
        Time result;
        result.second = second + t.second;
        result.minute = minute + t.minute + result.second / 60;
        result.hour = 12 + t.hour + result.minute / 60;
        result.second %= 60;
        result.minute %= 60;
        result.hour %= 24;
        return result;
    }

    void display12HourFormat() {
        string suffix = (hour >= 12) ? "PM" : "AM";
        int displayHour = (hour > 12) ? (hour - 12) : hour;
        if (displayHour == 0)
            displayHour = 12;
        cout << "Time: " << displayHour << ":" << minute << ":" << second << " " << suffix << endl;
    }

    void display24HourFormat() {
        cout << "Time: " << hour << ":" << minute << ":" << second << endl;
    }
};

int main() {
    Time t1; // Initializes to default time 0:0:0
    Time t2(5, 30, 45); // Initializes to custom time 5:30:45

    Time t3 = t1.addTime(t2);

    t1.display12HourFormat();
    t1.display24HourFormat();
    cout << endl;
    t2.display12HourFormat();
    t2.display24HourFormat();
    cout << endl;
    t3.display12HourFormat();
    t3.display24HourFormat();

    return 0;
}

