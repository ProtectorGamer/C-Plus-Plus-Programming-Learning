/*
7. A point on the two-dimensional plane can be represented by two numbers: an X coordinate and a Y
coordinate. For example, (4, 5) represents a point 4 units to the right of the origin along the X-axis, and
5 units up to the Y-axis. The sum of two points can be defined as a new point whose X coordinate is the
sum of the X coordinate of the two points, and whose Y coordinate is the sum of their Y coordinates.
*/

#include <iostream>

using namespace std;

int main() 
{
    int x1, y1, x2, y2;

    cout << "Enter x and y for point 1: ";
    cin >> x1 >> y1;

    cout << "Enter x and y for point 2: ";
    cin >> x2 >> y2;

    int sumX = x1 + x2;
    int sumY = y1 + y2;

    cout << "Sum of points : (" << sumX << ", " << sumY << ")" << "\n";

    return 0;
}
