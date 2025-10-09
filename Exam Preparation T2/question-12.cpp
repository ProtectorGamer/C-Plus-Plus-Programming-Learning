/*
Topic: Operator overloading.
Write a C++ program to define a class Complex with private data members real and imag (both float). 
Overload the + operator to add two Complex objects (adding respective real and imag parts) and return a new Complex object. 
Overload the << operator to print a Complex object in the format "(real, imag)". 
Demonstrate in main() by adding two Complex objects and printing the result. Use <iostream>.
(Expected Output Example: Input c1(1.5, 2.5), c2(3.0, 4.0) → Sum: (4.5, 6.5))
*/

#include <iostream>

using namespace std;

class Complex
{
    private:
    float real;
    float imag;

    public:

    Complex()
    {
        real = 0;
        imag = 0;
    }

    Complex(float a, float b)
    {
        real = a;
        imag = b;
    }

    Complex operator+(const Complex &x)
    {
        return Complex(real + x.real , imag + x.imag);
    }

    friend ostream& operator << (std::ostream& a, const Complex &x);
};

ostream& operator << (std::ostream& a, Complex &x)
{
    a << "( " << x.real << " + " << x.imag << "i )" << endl;
    return a;
}

int main()
{
    Complex c1(3.0, 4.0);
    Complex c2(2.0, 3.0);

    Complex sum = c1 + c2;

    cout << "Sum : " << sum << endl;

    return 0;
}