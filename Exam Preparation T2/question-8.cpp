/*
Topic: Classes and objects.
Write a C++ program to define a class Book with private data members bookId (int) and price (float). 
Provide a default constructor (sets bookId to 0 and price to 0.0) and a parameterized constructor to initialize the members. 
Include a member function display() to print the book details in the format "Book ID: X, Price: Y". 
Demonstrate in main() by creating two Book objects (one using each constructor) and calling display() for both. Use <iostream>.
(Expected Output Example: Input b1(101, 250.50), b2() → Book ID: 101, Price: 250.50, Book ID: 0, Price: 0)
*/

#include <iostream>

using namespace std;

class Book
{
    private:
    int bookid;
    float price;

    public:

    Book()
    {
        bookid = 0;
        price = 0;
    }

    Book(int a, float b)
    {
        bookid = a;
        price = b;
    }

    void display()
    {
        cout << "Book ID : " << bookid << " Price : " << price << endl;
    }
};

int main()
{
    Book b1(101, 250.50);
    Book b2;


    b1.display();
    b2.display();

    return 0;
}