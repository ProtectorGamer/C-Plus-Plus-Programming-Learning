/*
Topic: Function overloading.
Write a C++ program to define a class Calculator with a member function add overloaded to handle:

Two integers (returns their sum as int).
Two floats (returns their sum as float).
Three integers (returns their sum as int).
Demonstrate in main() by creating a Calculator object and calling all three add functions with appropriate inputs. 
Use <iostream>.

(Expected Output Example: Input add(2, 3), add(2.5, 3.5), add(1, 2, 3) → Sum: 5, Sum: 6, Sum: 6)
*/

#include <iostream>

using namespace std;

class Calculator
{
    public:

    void add(int a, int b)
    {
        return a + b;
    }

    void add(float a, float b)
    {
        return a + b;
    }

    void add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    Calculator add(2, 3);
    Calculator add(2.5, 3.0);
    Calculator add(1, 2, 3);

    cout << "Sum : " << endl;
}