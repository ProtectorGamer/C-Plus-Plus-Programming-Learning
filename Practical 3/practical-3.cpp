/*/*
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
            int accounttype;
            int accountnumber;
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
                if(accountnumber == accnumber)
                {
                    if( bal > 0 )
                    {
                        balance += bal;
                        cout << "Amount : " << bal <<"Deposited successfully" << endl;
                        cout << "Current Balance : " << balance << endl;
                    }
                    else
                    {
                        cout << "Amount should be greater than 0" << endl;
                    }
                }
                else
                {
                    cout << "Account Number not registered." << endl;
                }
            }

            void withdraw(int accnumber, float bal)
            {
                if(accountnumber == accnumber)
                {
                    if( bal > 0 )
                    {
                        balance -= bal;
                        cout << "Amount : " << bal <<"Withdraw successfully" << endl;
                        cout << "Current Balance : " << balance << endl;
                    }
                    else
                    {
                        cout << "Amount should be greater than 0" << endl;
                    }
                }
                else
                {
                    cout << "Account Number not registered." << endl;
                }
            }

            bool accountstatus(int accnumber)
            {
                if (accountnumber == accnumber)
                {
                    cout << "Account Name : " << name << endl;
                    cout << "Balance: " << balance << endl;
                    cout << "Account Type :  " << (accounttype == 1 ? "Saving" : "Current") << endl;
                    return true;
                }
                else
                {
                    cout << "Account number is not registered" << endl;
                    return false;
                }
            }


};

int main()
{
    bankdetail bb[10];
    int tc = 0;
    int a, b;
    float c;
    string d;

    start:
    int choice;
    cout << "\nWelcome to Banking System" << endl;
    cout << "Kindly Select the Following Choice: " << endl;
    cout << "1. Create New Account\n2. Deposit Money\n3. Withdraw Money\n4. View Account Details\n5. Exit" << endl;
    cin >> choice;

    switch(choice)
    {
        case 1:
                {
                    cout << "Input the Account Number to Assign : ";
                    cin >> a;

                    cout << "Kindly Select Account Type (1 - Saving | 2 - Current): ";
                    cin >> b;
                    if (b != 1 && b != 2)
                    {
                        cout << "Invalid account type!" << endl;
                        goto start;
                    }

                    cout << "Kindly Input the Username: ";
                    cin >> d;

                    bb[tc].initialvalue(a, b, 0.0, d);
                    tc++;
                    cout << "Account created successfully!" << endl;
                    goto start;
    
                }
        case 2:
                {
                    cout << "Input the Account Number : ";
                    cin >> a;
                    for (int i = 0; i < tc; i++)
                    {
                        if (bb[i].accountstatus(a))
                        {
                            cout << "Input the Amount to be Deposited : ";
                            cin >> c;
                            bb[i].deposit(a, c);
                        }
                    }
                    goto start;
                }
        case 3:
                {
                    cout << "Input the Account Number : ";
                    cin >> a;
                    for (int i = 0; i < tc; i++)
                    {
                        if (bb[i].accountstatus(a))
                        {
                            cout << "Input the Amount to be Withdraw : ";
                            cin >> c;
                            bb[i].withdraw(a, c);
                        }
                    }
                    goto start;
                }
        case 4:
                {
                    cout << "Input the Account Number : ";
                    cin >> a;
                    for( int i = 0; i < tc; i++)
                    {
                            bb[i].accountstatus(a);
                    }
                    goto start;
                }
        case 5:
                {
                    cout << "Exited the Code Successfully" << endl;
                }
        default:
                {
                    cout << "Kindly Input the Correct Option to start with" << endl;
                    goto start;
                }
    }
    return 0;
}