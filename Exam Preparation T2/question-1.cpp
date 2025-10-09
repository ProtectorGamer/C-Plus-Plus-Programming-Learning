/*

Topic: Function overloading with friend function for comparison.
Write a C++ program to define a class Time with private data members hours (int) and minutes (int).
 Overload the member function showTime() to display time in two formats: (i) "X hours Y minutes"
  (when called with an int parameter, choice=1), and (ii) "Total: Z minutes" (when called with a float parameter, choice=2).
   Implement a friend function isEqual(Time, Time) that compares two Time objects and returns a boolean
    (true if they represent the same total minutes, false otherwise). Demonstrate in main() by creating two Time objects,
     displaying their times in both formats, and checking if they are equal.
(Expected Output Example: Input t1(2, 30), t2(1, 90) → t1: 2 hours 30 minutes, Total: 150 minutes;
 t2: 1 hours 90 minutes, Total: 150 minutes; Equal: true)

*/

#include <iostream>
#include <string>

using namespace std;

class Time
{
    private:
    int hours;
    int minutes;

    public:
    Time()
    {
        hours = 0;
        minutes = 0;
    }

    Time(int a, int b)
    {
        hours = a;
        minutes = b;
    }

    void showTime(int choice)
    {
        if(choice == 1)
        {
        int result = 60 * hours + minutes;

        cout << "Total Minutes (int) : " << result << endl;
        }
    }

    void showTime(float choice)
    {
        float result2 = 60 * hours + minutes;

        cout << "Total Numbers (float) : " << result2 << endl;
    }


    friend bool isEqual(Time a, Time b);

};

bool isEqual(Time a, Time b)
{
    int result1 = a.hours * 60 + a.minutes;
    int result2 = b.hours * 60 + b.minutes;

    return result1 == result2;
}

int main()
{
    Time t1(2, 30);
    Time t2(1, 90);

    cout << "Time T1 : " << endl;
    t1.showTime(1);
    t1.showTime(2.00f);

    cout << "Time T2 : " << endl;

    t2.showTime(1);
    t2.showTime(2.00f);


    bool result = isEqual(t1, t2);

    cout << "Result : " << (result ? "true" : "false") << endl;

    return 0;
}