/*
Define a class String that could work as a user-defined string type. Include constructors that will enable
us to create an uninitialized string String s1; // string with length 0 and also to initialize an object with a
string constant at the time of creation like String s2(“Well done”); Include a destructor to deallocate the
space for objects. All the constructors and destructors should display a message to confirm their
invocation (e.g., ―default constructor is invoked, parameterized constructor is invoked, destructor is
invoked). Include a function that adds two strings to make a third string. Note that the statement s2 =
s1; will be perfectly reasonable expression to copy one string to another. Write a complete program to
test your class to so that it does the following tasks:
(a) Create uninitialized string objects
(b) Creates objects with string constants.
(c) Calls the destructor
(d) Concatenates two strings properly
(e) Displays a desired string object.
*/

#include <iostream>
#include <string>

using namespace std;

class info
{
    private:
    string detail;

    public:
    info()
    {
        detail = "";
    }

    info(string a)
    {
        detail = a;
    }

    info(info &b)
    {
        detail = b.detail;
    }

    void display()
    {
        cout << "Following String : " << detail << endl;
    }

    info concat(const info &x) const
    {
        return info(detail + x.detail);
    }

    ~info()
    {
        cout << "String : " << detail << " has been destructed" << endl;
    }

};

int main()
{
    info s0;
    
    info s1("hello");
    s1.display();
    
    string a;
    cout << "Kindly Input your String : " << endl;
    getline(cin, a);
    
    info s2;
    s2 = a;
    s2.display();
    
    info s3(s1);
    s3.display();

    info s4 = s1.concat(s2);
    s4.display();

    return 0;
}