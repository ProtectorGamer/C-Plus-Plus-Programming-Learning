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

struct Room 
{
    int roomNumber;
    bool isOccupied;
    string guestName;
    int guestAge;
    string guestPhone;
};

const int TOTAL_ROOMS = 10;
Room hotel[TOTAL_ROOMS];

void initializeRooms() 
{
    for (int i = 0; i < TOTAL_ROOMS; i++) 
    {
        hotel[i].roomNumber = 101 + i;
        hotel[i].isOccupied = false;
        hotel[i].guestName = "";
    }
}

void manageRooms() 
{
    cout << "\nRoom Status:\n";
    cout << left << setw(10) << "Room No" << setw(10) << "Status" << endl;
    for (int i = 0; i < TOTAL_ROOMS; i++) 
    {
        cout << left << setw(10) << hotel[i].roomNumber 
             << setw(10) << (hotel[i].isOccupied ? "Occupied" : "Available") << endl;
    }
    cout << endl;
}

void checkIn() 
{
    int roomNo;
    cout << "Enter Room Number to Check-In: ";
    cin >> roomNo;

    for (int i = 0; i < TOTAL_ROOMS; i++) 
    {
        if (hotel[i].roomNumber == roomNo) 
        {
            if (hotel[i].isOccupied) 
            {
                cout << "Room already occupied!\n\n";
                return;
            } 
            else 
            {
                cout << "Enter Guest Name: ";
                cin.ignore();
                getline(cin, hotel[i].guestName);
                cout << "Enter Guest Age: ";
                cin >> hotel[i].guestAge;
                cout << "Enter Guest Phone: ";
                cin.ignore();
                getline(cin, hotel[i].guestPhone);

                hotel[i].isOccupied = true;
                cout << "Guest Checked-In Successfully!\n\n";
                return;
            }
        }
    }
    cout << "Invalid Room Number!\n\n";
}

void availableRooms() 
{
    cout << "\nAvailable Rooms:\n";
    bool found = false;
    for (int i = 0; i < TOTAL_ROOMS; i++) 
    {
        if (!hotel[i].isOccupied) 
        {
            cout << hotel[i].roomNumber << " ";
            found = true;
        }
    }
    if (!found) cout << "No rooms available!";
    cout << "\n\n";
}

void searchCustomer() 
{
    string name;
    cout << "Enter Guest Name to Search: ";
    cin.ignore();
    getline(cin, name);

    for (int i = 0; i < TOTAL_ROOMS; i++) 
    {
        if (hotel[i].isOccupied && hotel[i].guestName == name) {
            cout << "Guest Found in Room " << hotel[i].roomNumber << endl;
            return;
        }
    }
    cout << "Guest Not Found!\n\n";
}

void checkOut() 
{
    int roomNo;
    cout << "Enter Room Number to Check-Out: ";
    cin >> roomNo;

    for (int i = 0; i < TOTAL_ROOMS; i++) 
    {
        if (hotel[i].roomNumber == roomNo) 
        {
            if (!hotel[i].isOccupied) 
            {
                cout << "Room is already empty!\n\n";
                return;
            } 
            else 
            {
                hotel[i].isOccupied = false;
                hotel[i].guestName = "";
                hotel[i].guestAge = 0;
                hotel[i].guestPhone = "";
                cout << "Checked-Out Successfully!\n\n";
                return;
            }
        }
    }
    cout << "Invalid Room Number!\n\n";
}

void guestInfo() 
{
    int roomNo;
    cout << "Enter Room Number for Guest Information: ";
    cin >> roomNo;

    for (int i = 0; i < TOTAL_ROOMS; i++) 
    {
        if (hotel[i].roomNumber == roomNo) 
        {
            if (hotel[i].isOccupied)
            {
                cout << "\nGuest Name: " << hotel[i].guestName
                     << "\nAge: " << hotel[i].guestAge
                     << "\nPhone: " << hotel[i].guestPhone << "\n\n";
            } 
            else 
            {
                cout << "Room is empty!\n\n";
            }
                return;
        }
    }
    cout << "Invalid Room Number!\n\n";
}

int main()
{
    int choice;

    initializeRooms(); // sabse pehle room JAATO ka

    cout << "Welcome to Vansh's Hotel Management System" << endl;
    cout << "You've been Authorized as Administrator. Welcome to our System" << endl;

    start: //Goto Function hai idhar. Edit karne ke liya hai ye wo
    cout << "Kindly Select the Option from the Below List(s) : " << endl;
    cout << "1. Manage Rooms\n" 
         << "2. Check-In Room\n" 
         << "3. Available Rooms\n" 
         << "4. Search Customer\n" 
         << "5. Check-Out Room\n" 
         << "6. Guest Information (Room No.)\n" 
         << "7. Exit the Panel\n" << endl;

    cin >> choice;

    switch(choice)
    {
        case 1 :
                {
                    manageRooms();
                    break;
                }
        case 2 :
                {
                    checkIn();
                    break;
                }
        case 3 :
                {
                    availableRooms();
                    break;
                }
        case 4 :
                {
                    searchCustomer();
                    break;
                }
        case 5 :
                {
                    checkOut();
                    break;
                }
        case 6 :
                {
                    guestInfo();
                    break;
                }
        case 7 :
                {
                    exit(0);
                }
        default:
        {
            cout << "You've entered the Wrong Choice.\n\n" << endl;
        }
    }

    goto start; // loop back hai menu ka goto sai
    return 0;
}
