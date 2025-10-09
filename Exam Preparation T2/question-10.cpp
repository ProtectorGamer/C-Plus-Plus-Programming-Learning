/*
Topic: File handling (writing and reading).
Write a C++ program to define a class Student with private data members rollNo (int) and marks (float). 
Provide a member function writeToFile() to write a Student object’s data to a binary file "students.dat" 
(format: rollNo followed by marks). Provide another member function readFromFile(int roll) to read and display the Student 
data from the file for a given rollNo in the format "Roll No: X, Marks: Y". 
Demonstrate in main() by writing two Student objects to the file and reading one by rollNo. Use <fstream>.
*/

#include <iostream>
#include <fstream>

using namespace std;

class Student
{
    private:
    int rollnumber;
    float marks;

    public:

    Student()
    {
        rollnumber = 0;
        marks = 0;
    }

    Student(int a, float b)
    {
        rollnumber = a;
        marks = b;
    }

    void WriteToRead()
    {
        ofstream file("students.dat", ios::app | ios::binary);

        if(!file)
        {
            cout << "File not Found" << endl;
            return;
        }

        file.write(reinterpret_cast<char*>(&rollnumber), sizeof(rollnumber));
        file.write(reinterpret_cast<char*>(&marks), sizeof(marks));
        file.close();
    }

    static void ReadFromFile(int rno)
    {
        ifstream file("students.dat", ios::binary);

        if(!file)
        {
            cout << "File does not exist" << endl;
            return;
        }

        bool found = false;

        while(file)
        {
            int roro;
            float maks;

            file.read(reinterpret_cast<char*>(&roro), sizeof(roro));

            if(file.eof())
            {
                break;
            }

            file.read(reinterpret_cast<char*>(&maks), sizeof(maks));

            if(roro == rno)
            {
                cout << "Roll Number : " << roro << " Marks : " << maks << endl;
                found = true;
            }

        }

        if(!found)
        {
            cout << "Roll Number " << rno << " not found" << endl;
        }

        file.close();
    }
};

int main()
{

    Student s1(101, 95.6f);
    Student s2(102, 95.4f);

    s1.WriteToRead();
    s2.WriteToRead();

    Student::ReadFromFile(102);

    return 0;
}