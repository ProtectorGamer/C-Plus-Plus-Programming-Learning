/*
Define a class in C++ to represent a bank account. Include the following members:  
Data members:  
a) Name of the depositor  
b) Account number  
c) Type of account  
d) Balance amount in the account  
Member functions: (Define all the member functions inside the class)  
a) To assign initial values  
b) To deposit an amount  
c) To withdraw an amount after checking the balance  
d) To display name and balance  
Write a main function to create a database of 10 customers 
*/


#include <iostream>
#include <string>

using namespace std;

class bankdetail
{
private:
    int accountnumber;
    int accounttype; // 1 for Saving, 2 for Current
    float balance;
    string name;

public:
    void initialvalue(int accnumber, int acctype, float bal, const string& n)
    {
        accountnumber = accnumber;
        accounttype = acctype;
        balance = bal;
        name = n;
    }

    void deposit(int accnumber, float bal)
    {
        if (accountnumber == accnumber)
        {
            if (bal > 0)
            {
                balance += bal;
                cout << "Amount " << bal << " deposited successfully!" << endl;
                cout << "New Balance: " << balance << endl;
            }
            else
            {
                cout << "Invalid deposit amount!" << endl;
            }
        }
        else
        {
            cout << "Account number does not match!" << endl;
        }
    }

    void withdraw(int accnumber, float bal)
    {
        if (accountnumber == accnumber)
        {
            if (bal > 0 && bal <= balance)
            {
                balance -= bal;
                cout << "Amount " << bal << " withdrawn successfully!" << endl;
                cout << "New Balance: " << balance << endl;
            }
            else
            {
                cout << "Insufficient balance or invalid amount!" << endl;
            }
        }
        else
        {
            cout << "Account number does not match!" << endl;
        }
    }

    void accountstatus(int accnumber)
    {
        if (accountnumber == accnumber)
        {
            cout << "Account Holder: " << name << endl;
            cout << "Balance: " << balance << endl;
            cout << "Account Type: " << (accounttype == 1 ? "Saving" : "Current") << endl;
        }
        else
        {
            cout << "Account number does not match!" << endl;
        }
    }
};

int main() // Changed from void main() to int main() as per C++ standard
{
    bankdetail customers[10]; // Array to store 10 customer accounts
    int customerCount = 0;   // Track number of accounts created
    int a;
    int b;
    float c;
    string d;

start:
    int choice;
    cout << "\nWelcome to Banking System" << endl;
    cout << "Kindly Select the Following Choice: " << endl;
    cout << "1. Create New Account\n2. Deposit Money\n3. Withdraw Money\n4. View Account Details\n5. Exit" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        if (customerCount < 10)
        {
            cout << "Kindly Input Account Number to Assign: ";
            cin >> a;
            // Check for unique account number
            bool accountExists = false;
            for (int i = 0; i < customerCount; i++)
            {
                customers[i].accountstatus(a); // Check if account number exists
                if (customers[i].accountstatus(a)) // Simplified check
                {
                    accountExists = true;
                    break;
                }
            }
            if (!accountExists)
            {
                cout << "Kindly Select Account Type (1 - Saving | 2 - Current): ";
                cin >> b;
                if (b != 1 && b != 2)
                {
                    cout << "Invalid account type!" << endl;
                    goto start;
                }
                cout << "Kindly Input the Username: ";
                cin.ignore(); // Clear input buffer
                getline(cin, d); // Allow full name with spaces
                customers[customerCount].initialvalue(a, b, 0.0, d);
                customerCount++;
                cout << "Account created successfully!" << endl;
            }
            else
            {
                cout << "Account number already exists!" << endl;
            }
        }
        else
        {
            cout << "Cannot create more accounts. Database full!" << endl;
        }
        break;
    }
    case 2:
    {
        cout << "Input the Account Number: ";
        cin >> a;
        bool found = false;
        for (int i = 0; i < customerCount; i++)
        {
            if (customers[i].accountstatus(a)) // Check if account exists
            {
                cout << "Input the Amount to be Deposited: ";
                cin >> c;
                customers[i].deposit(a, c);
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Account not found!" << endl;
        }
        break;
    }
    case 3:
    {
        cout << "Input the Account Number: ";
        cin >> a;
        bool found = false;
        for (int i = 0; i < customerCount; i++)
        {
            if (customers[i].accountstatus(a)) // Check if account exists
            {
                cout << "Input the Amount to be Withdrawn: ";
                cin >> c;
                customers[i].withdraw(a, c);
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Account not found!" << endl;
        }
        break;
    }
    case 4:
    {
        cout << "Input the Account Number: ";
        cin >> a;
        bool found = false;
        for (int i = 0; i < customerCount; i++)
        {
            if (customers[i].accountstatus(a)) // Check if account exists
            {
                cout << "Following are the Account Details: " << endl;
                customers[i].accountstatus(a);
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Account not found!" << endl;
        }
        break;
    }
    case 5:
    {
        cout << "Exited the Code Successfully" << endl;
        return 0;
    }
    default:
    {
        cout << "Kindly Input the Correct Option to start with" << endl;
    }
    }
    goto start;
    return 0;
}