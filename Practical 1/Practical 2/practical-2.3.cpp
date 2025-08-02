//3. WAP to read sales of 5 salesmen in 12 months and to print total sales made by each salesman.

#include <iostream>

using namespace std;

int main()
{
    int i, j, newcash = 0, cash = 0;

    for(i = 1; i <= 5; i++)
    {

        for(j = 1; j <= 12; j++)
        {
            cout<<"Salary of Employee "<<i<<" For "<<j<<" Month : ";
            cin>>cash;

            newcash = cash + newcash;
        }
        cout<<"\nSalary for Salesman "<<i<<" : "<<newcash<<"\n";
        newcash = 0;
    }

    return 0;
}