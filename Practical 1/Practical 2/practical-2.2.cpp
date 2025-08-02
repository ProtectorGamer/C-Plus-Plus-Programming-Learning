//2. WAP to read a string and print its length. 

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char string[100];

    cout<<"Enter the String : ";
    gets(string);

    cout<<"\nYou've Entered : ";
    puts(string);

    cout<<"\nLength of String : "<<strlen(string);
    return 0;
}