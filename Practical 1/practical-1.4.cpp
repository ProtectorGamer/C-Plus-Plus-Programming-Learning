//4. WAP to print area and perimeter of a rectangle.

#include <iostream>

using namespace std;

int main()
{
    int length, width;

    cout<<"Input The Length of Rectange : ";

    cin>>length;

    cout<<"\nInput the Width of Rectange : ";

    cin>>width;

    int area, perimeter;

    area = length * width;
    perimeter = 2 * ( length + width);

    cout<<"Area of Rectange : "<<area<<"\nPerimeter of Rectange : "<<perimeter;
    return 0;
}