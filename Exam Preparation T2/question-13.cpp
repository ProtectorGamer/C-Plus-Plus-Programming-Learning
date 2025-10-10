/*
Topic: File handling (searching in a text file).
Write a C++ program to define a class Employee with private data members empId (int) and salary (float). 
Provide a member function writeToFile() to write an Employee object’s data to a text file "employees.txt" 
in the format "empId salary" (e.g., "101 50000"). Provide a static member function searchById(int id) to read 
the file and display the Employee data for the given empId in the format "Employee ID: X, Salary: Y". If not found, 
print "Employee with ID X not found". 
Demonstrate in main() by writing two Employee objects to the file and searching for one empId.
Use <fstream> and <iostream>.
*/

#include <iostream>
#include <fstream>

using namespace std;

class Employee
{
    private:
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
        ofstream file("Employees.txt", ios::app);

        if(!file)
        {
            cout << "Employee.txt not found " << endl;
            return;
        }

        file << empid << "" << salary << "\n";
        file.close();
    }

    static void ReadFromFile(int id)
    {
        ifstream file("Employees.txt");
        if(!file)
        {
            cout << "Employee.txt not found" << endl;
            return;
        }

        bool found = false;
        int currentid;
        float currentsalary;
        while(file >> currentid >> currentsalary)
        {
            if(currentid = id)
            {
                cout << "Employee ID : " << currentid << ", Salary : " << currentsalary << endl;
                found = true;
            }
        }
        if(!found)
        {
            cout << "Employee ID : " << id << " not found " << endl;
        }

        file.close();
    }
};

int main()
{
    Employee e1(100, 10000.0f);
    Employee e2(101, 20000.0f);

    e1.WriteToFile();
    e2.WriteToFile();

    Employee::ReadFromFile(100);
}
