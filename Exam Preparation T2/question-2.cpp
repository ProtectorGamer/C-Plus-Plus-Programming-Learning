/*
Write a C++ program to define a class Rectangle with private data members length (float) and width (float).
 Overload the member function display() to show the rectangle's dimensions in two formats:
  (i) "Length: X, Width: Y" (when called with an int parameter, choice=1),
   and (ii) "Area: Z" (when called with a float parameter, choice=2).
    Implement a friend function scale(Rectangle, float) that takes a Rectangle object and a scaling factor (float),
     returns a new Rectangle with dimensions multiplied by the scaling factor, and handles invalid scaling factors
      (e.g., negative values by returning the original rectangle).
       Demonstrate in main() by creating a Rectangle, scaling it by a factor of 2.0,
        and displaying both original and scaled rectangles in both formats.
(Expected Output Example: Input r1(3.5, 2.0),
 scale factor 2.0 → Original: Length: 3.5, Width: 2; Area: 7;
  Scaled: Length: 7, Width: 4; Area: 28)
*/

#include <iostream>

using namespace std;

class Rectange
{
    private:
    float length;
    float width;

    public:

    Rectange()
    {
        length = 0;
        width = 0;
    }

    Rectange(float a, float b)
    {
        length = a;
        width = b;
    }

    void display(int choice)
    {
        if( choice == 1)
        {
            cout << "Length : " << length << endl << "Width : " << width << endl; 
        }
    }

    void display(float choice)
    {
        float total = length * width;

        cout << "Area : " << total << endl;
    }

    friend Rectange scale(Rectange a, float b);
};

Rectange scale(Rectange a, float b)
{
    if( b <= 0)
    {
        return a;
    }

    return Rectange(a.length * b, a.width * b);
}

int main()
{
    Rectange r1(3.5, 2.0);

    r1.display(1);
    r1.display(2.0f);

    Rectange r2 = scale(r1, 2.0f);

    r2.display(1);
    r2.display(2.0f);

    return 0;

}