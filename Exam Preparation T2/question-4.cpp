/*
Topic: File handling (writing and reading).
Write a C++ program to define a class Student with private data members rollNo (int) and name (string).
 Provide a member function writeToFile() to write a Student object's data to a binary file "students.dat"
  (format: rollNo followed by name). Provide another member function readFromFile(int roll)
   to read and display the Student data from the file for a given rollNo.
    Demonstrate in main() by writing two Student objects to the file and reading one by rollNo. Use <fstream> and <string>.
(Expected Output Example: Input s1(101, "Alice"), s2(102, "Bob"), read rollNo 101 → Found: Roll No: 101, Name: Alice)

*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student
{
    private:
    int rollnumber;
    string name;

    public:

    Student()
    {
        name = "";
        rollnumber = 0;
    }
    
    Student(int a, string b)
    {
        name = b;
        rollnumber = a;
    }

    void Writetofile()
    {
        ofstream file("students.dat", ios::app | ios::binary);

        if(!file)
        {
            cout << "File does not exist!" << endl;
            return;
        }

        file.write(reinterpret_cast<char*>(&rollnumber), sizeof(rollnumber));

        size_t namelength = name.length();

        file.write(reinterpret_cast<char*>(&namelength), sizeof(namelength));
        file.write(name.c_str(), nameLength);
        file.close();
    }

    static void ReadfromFile()
    {
        ifstream file("students.dat", ios::binary);

        if(!file)
        {
            cout << "File does not exist!" << endl;
            return;
        }

        bool found = false;

        while(file)
        {
            int croll;

            file.read(reinterpret_cast<char*>(&croll), sizeof(croll));
            if(file.eof())
            {
                break;
            }

            if (croll == rollnumber) 
            {
                size_t namelength;

                file.read(reinterpret_cast<char*>(&namelength), sizeof(namelength));
                char* buffer = new char[namelength + 1];
                file.read(buffer, namelength);
                buffer[namelength] = '\0';
                string foundName(buffer);
                delete[] buffer;
                cout << "Found: Roll No: " << croll << ", Name: " << foundName << std::endl;
                found = true;
            }
            else
            {
                file.seekg(namelength, ios::cur);
            }
        }
            if(!found)
            {
                cout << "Student with Roll Number : " << rollnumber << " not found" << endl;
            }

        file.close();
    }
};

int main()
{
    Student s1(101, "Protector");
    Student s2(102, "Mayank:");

    s1.Writetofile();
    s2.Writetofile();

    Student::ReadfromFile(101);
}