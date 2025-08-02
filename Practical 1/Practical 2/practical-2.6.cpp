/*
6. Write a complete C++ program that invokes a function satis() to find whether four integers a, b, c ,d
sent to satis() satisfy the equation a3+b3+c3=d3 or not. The function satis() returns 0 if the above
equation is satisfied with the given four numbers otherwise it returns -1. If returned 0 then print “The
values of a, b, c and d satisfies the equation”, else print “The values a, b, c and d does not satisfied the
equation”.
*/

#include <iostream>
using namespace std;

int satis(int a, int b, int c, int d) 
{
    if ((a*a*a) + (b*b*b) + (c*c*c) == (d*d*d))
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

int main() 
{
    int a, b, c, d;
    cout << "Enter four integers (a, b, c, d): ";
    cin >> a >> b >> c >> d;

    int result = satis(a, b, c, d);

    if (result == 0)
    {
        cout << "The values of a, b, c and d satisfies the equation" << "\n";
    }
    else
    {
        cout << "The values a, b, c and d does not satisfied the equation" << "\n";
    }
    return 0;
}
