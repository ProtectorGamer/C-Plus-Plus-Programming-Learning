/*
2.	Assume that you want to generate a table of multiples of any given number.
    Write a program that allows the user to enter the number and then generates the table,
    formatting it into 10 columns and 20 lines. Interaction with the program should look like this
    (only the first three lines are shown):
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int number;
    int newline1;
    cout << "Kindly Input the Number for Multiplication Table : ";
    cin >> number;

    cout << "Kindly Input the Number of Columns Required for the Table ( 1 - 10) : ";
    cin >> newline1;
    int newline = newline1 * 10;

    cout << "\n";
    for(int i = 1; i <= 30; ++i)
    {
        cout << setw(6) << number * i;

        if ( i % newline == 0)
        {
            cout << "\n";
        }
    }
    return 0;
}