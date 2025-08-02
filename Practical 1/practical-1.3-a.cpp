//3. (a) WAP to input two numbers from user and swap it. 

#include <iostream>

using namespace std;

int main()
{
    int a, b, temp;

    cout<<"Input 2 Numbers as per your choice\n";

    cin>>a>>b;

    cout<<"Swapping 1st Number with 2nd Number\n";
    temp = a;
    a = b;
    b = temp;


    cout<<"1st Number : "<<a<<"\n2nd Number : "<<b;

    return 0;
}