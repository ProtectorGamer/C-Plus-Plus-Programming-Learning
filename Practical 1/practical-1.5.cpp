//5. WAP to input temperature in Fahrenheit from user and convert it into Celsius.

#include <iostream>

using namespace std;

int main()
{
    float fah, cel;

    cout<<"Input the Value for Fahrenheit : ";
    cin>>fah;

    cel = ( fah - 32 ) * 5/9;
    
    cout<<"Celcius Converted Value : "<<cel;

    return 0;
}