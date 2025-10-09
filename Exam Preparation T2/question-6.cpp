/*

Topic: Inheritance and polymorphism.
Write a C++ program to define a base class Shape with a pure virtual function area() (returns float).
Derive two classes Circle (with private member radius, float) and Rectangle (with private members length and width, float)
from Shape. Implement area() in each derived class (Circle: π * radius², Rectangle: length * width).
Demonstrate in main() by creating objects of Circle and Rectangle using base class pointers and calling area(). 
Use <cmath> for π (M_PI).
(Expected Output Example: Input Circle(5), Rectangle(4, 3) → Circle Area: 78.54, Rectangle Area: 12)

*/

#include <iostream>
#include <cmath>

using namespace std;

class Shape
{
    public:

    virtual float area() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape 
{
    private:
    float radius;

    public:

    Circle(float a)
    {
        radius = a;
    }

    float area() override
    {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape
{
    private:
    float length;
    float width;

    public:

    Rectangle(float a, float b)
    {
        length = a;
        width = b;
    }

    float area() override
    {
        return length * width;
    }
};

int main()
{

    Shape* circle = new Circle(5.0f);

    Shape* rectangle = new Rectangle(3.0f, 4.0f);

    cout << "Area of Circle : " << circle->area() << endl;
    cout << "Area of Rectangle : " << rectangle->area() << endl;

    delete circle;
    delete rectangle;

    return 0;
}