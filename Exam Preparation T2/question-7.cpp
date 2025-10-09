/*
Topic: Operator overloading.
Write a C++ program to define a class Vector with private data members x and y (both float).
Overload the + operator to add two Vector objects (adding respective x and y components) and return a new Vector object.
Overload the << operator to print a Vector object in the format "(x, y)".
Demonstrate in main() by adding two Vector objects and printing the result. Use <iostream>.
(Expected Output Example: Input v1(1.5, 2.5), v2(3.0, 4.0) → Sum: (4.5, 6.5))
*/

#include <iostream>

using namespace std;

class Vector
{
    private:
    float x;
    float y;

    public:

    vector()
    {
        x = 0.0f;
        y = 0.0f;
    }

    vector(float a, float b)
    {
        x = a;
        y = b;
    }

    float operator + (const Vector &v)
    {
        return Vector(a + v.a, b + v.b);
    }

    friend ostream& operator << (std::ostream& a, const Vector &v);
};

ostream& operator<<(std::ostream& os, const Vector& v) {
    os << "(" << v.x << ", " << v.y << ")";
    return os;
}

int main()
{
    Vector v1(1.5f, 3.5f);
    Vector v2(2.5f, 4.5f);

    Vector sum = v1 + v2;

    cout << "Sum: " << sum << endl;
}