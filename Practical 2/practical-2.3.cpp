/*
3. Use for loops to construct a program that displays a pyramid of Xs on the screen.
The pyramid should look like this except that it should be 20 lines high, instead of the 5 lines shown here.
*/

#include <iostream>

using namespace std;

int main()
{

    for( int i = 1; i <= 5; i++)
    {
        for ( int j = 1; j <= 5 - i; j++)
        {
            cout << " ";
        }

        for(int k = 0; k < 2 * i - 1; k++)
        {
            cout << "X";
        }
        cout << "\n";
    }
    return 0;
}