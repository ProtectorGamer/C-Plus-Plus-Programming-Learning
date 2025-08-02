/*
1. WAP to input number of week’s days (1-7) and translate to its equivalent name of the day of the week. 
(e.g. 1 to Sunday, 2 to Monday, ….., 7 to Saturday). 
Note: Make use of switch statement. Also, print the output of above program if all the break statements are missing. 
*/

#include <iostream>

using namespace std;

int main()
{
    int a;

    cout<<"Welcome to Weekly Days TimeTable. Kindly Select Options between (1 - 7 ) : ";

    cin>>a;

    switch (a)
    {
    case 1:
            {
                cout<<"1 -> Sunday";
                break;
            }
    case 2:
            {
                cout<<"2 -> Monday";
                break;
            }
    case 3:
            {
                cout<<"3 -> Tuesday";
                break;
            }
    case 4:
            {
                cout<<"4 -> Wednesday";
                break;
            }
    case 5:
            {
                cout<<"5 -> Thursday";
                break;
            }
    case 6:
            {
                cout<<"6 -> Friday";
                break;
            }
    case 7:
            {
                cout<<"7 -> Saturday";
                break;
            }
    default:
            {
                cout<<"Wrong Option. Kindly Select Between ( 1 - 7 )";
                break;
            }
    }
    return 0;
}