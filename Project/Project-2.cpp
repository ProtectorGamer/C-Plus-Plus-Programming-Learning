/*

Hotel Reservation Sytem

Features to be included : 

Manage Rooms
Check-In
Get available rooms
Search customer
Check-out room
Get guest summary report

*/

#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

int main()
{
    int choice;

    cout << "Welcome to Vansh's Hotel Management System" << endl;
    cout << "You've been Authorized as Administrator. Welcome to our System" << endl;

    start: //Goto Function hai idhar. Edit karne ke liya hai ye wo
    cout << "Kindly Select the Option from the Below List(s) : " << endl;
    cout << "1. Manage Rooms\n" << "2. Check-In Room\n" << "3. Available Rooms\n" << "4. Search Customer\n" << "5. Check-Out Room\n" << "6. Guest Information (Room No.)\n" << "7. Exit the Panel\n" << endl;


    cin >> choice;

    switch(choice)
    {
        case 1 :
                {
                    //blank for now;
                    break;
                }
        case 2 :
                {
                    //blank for now;
                    break;
                }
        case 3 :
                {
                    // blank for now;
                    break;
                }
        case 4 :
                {
                    // blank for now;
                    break;
                }
        case 5 :
                {
                    // blank for now;
                    break;
                }
        case 6 :
                {
                    // blank for now;
                    break;
                }
        case 7 :
                {
                    // blank for now;
                    exit(0);
                }
        default:
        {
            cout << "You've entered the Wrong Choice.\n\n" << endl;
            goto start; // C-out ke near hai kidhar. dekhliyo
        }
    }
    return 0;
}