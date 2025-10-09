/*

Topic: File handling (writing and reading).
Write a C++ program to define a class Employee with private data members empId (int) and salary (float).
Provide a member function writeToFile() to write an Employee object’s data to a binary file "employees.dat" 
(format: empId followed by salary). Provide another member function readFromFile(int id) to read and display the Employee data 
from the file for a given empId. 
Demonstrate in main() by writing two Employee objects to the file and reading one by empId. Use <fstream>.

*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Employee
{
    int empid;
    float salary;

    public:
    Employee()
    {
        empid = 0;
        salary = 0.0f;
    }

    Employee(int a, float b)
    {
        empid = a;
        salary = b;
    }

    void WriteToFile()
    {
        ofstream file("employees.dat", ios::app | ios::binary);

        if(!file)
        {
            cout << "File does not Exist!" << endl;
            return;
        }

        file.write(reinterpret_cast<char*>(&empid), sizeof(empid));
        file.write(reinterpret_cast<char*>(&salary), sizeof(salary));

        file.close();
    }

    static void ReadFromFile(int eid)
    {
        ifstream file("employees.dat", ios::binary);

        if(!file)
        {
            cout << "File does not Exist!" << endl;
            return;
        }

        bool found = false;

        while(file)
        {
            
            int cid;
            float csalary;

            file.read(reinterpret_cast<char*>(&cid), sizeof(cid));
            if(file.eof())
            {
                break;
            }
            file.read(reinterpret_cast<char*>(&csalary), sizeof(csalary));
            if(cid == eid)
            {
                cout << "Found: Employee ID " << cid << ", Salary : " << csalary << std::endl;
                found = true;
            }
        }
        if(!found)
        {
            cout << "Employee with ID Number : " << eid << " not found" << endl;
        }
        file.close();
    }
};

int main()
{
    Employee e1(101, 10000.0f);
    Employee e2(102, 15000.0f);

    e1.WriteToFile();
    e2.WriteToFile();

    Employee::ReadFromFile(101);

    return 0;
}