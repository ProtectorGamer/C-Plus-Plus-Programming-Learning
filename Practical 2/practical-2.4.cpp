/*
4.	WAP that repeatedly asks for a numberber and calculates its factorial,
    until the user enters 0, at which point it terminates. 
*/

#include <iostream>

using namespace std;

int main() 
{
    int number;
    long long factorial;

    start:
    cout << "Enter a Number (0 to exit): ";
    cin >> number;

    if (number == 0)
    {
        return 0;
    }

    factorial = 1;

    for (int i = 1; i <= number; ++i) 
    {
        factorial *= i;
    }

    cout << "Factorial of " << number << " is : " << factorial << "\n";

    goto start;
}
