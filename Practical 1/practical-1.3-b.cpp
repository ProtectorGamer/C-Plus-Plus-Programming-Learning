//3. (b) WAP to input two numbers from user and swap it without using temporary variable. 

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout<<"Input 2 Numbers as per your choice\n";

    cin>>a>>b;

    cout<<"Swapping 1st Number with 2nd Number\n";
    
    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"1st Number : "<<a<<"\n2nd Number : "<<b;

    return 0;
}