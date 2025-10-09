/*
Write a C++ program to define a class Complex with private data members real (float) and imag (float).
 Overload the + operator to add two Complex objects and return a new Complex object.
  Also, provide a conversion function to convert a Complex object to a float (returning magnitude, i.e., sqrt(real² + imag²)).
   Demonstrate in main() by adding two complex numbers and converting the result to its magnitude.
    Use <cmath> for sqrt.
(Expected Output Example: Input c1(3, 4), c2(1, 2) → Sum: 4 + 6i; Magnitude: 7.211)
*/

#include <iostream>
#include <cmath>

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

    Complex operator + (const Complex &a)
    {
        return Complex ( real + a.real , imag + a.imag ) ;
    }

    operator float()
    {
        return sqrt (real * real + imag * imag ) ;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{

    Complex c1(3.0f , 4.0f);
    Complex c2(1.0f , 2.0f);

    Complex sum = c1 + c2;

    cout << " Sum : " << endl;
    sum.display();

    float magnitude = sum;

    cout << "Magnitude : " << magnitude << endl;


    return 0;
}