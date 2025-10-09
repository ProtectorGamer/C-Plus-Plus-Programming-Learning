/*
Topic: Inheritance and polymorphism.
Write a C++ program to define a base class Animal with a pure virtual function speak() (returns void). 
Derive two classes Dog (with private member name, string) and Cat (with private member name, string) from Animal. 
Implement speak() in each derived class to print "Dog [name] says Woof" or "Cat [name] says Meow". Demonstrate in main() 
by creating objects of Dog and Cat using base class pointers and calling speak(). Use <string> and <iostream>.
(Expected Output Example: Input Dog("Buddy"), Cat("Whiskers") → Dog Buddy says Woof, Cat Whiskers says Meow)
*/

#include <iostream>
#include <string>

using namespace std;

class Animal
{
    public:

    virtual void speak() = 0;

    virtual ~Animal() {};
};

class Dog : public Animal
{
    private:
    string name;

    public:

    Dog(string n)
    {
        name = n;
    }

    void speak() override
    {
        cout << "Dog " << name << " Barks Woof" << endl;
    }
};

class Cat : public Animal
{
    private:
    string name;

    public:

    Cat(string n)
    {
        name = n;
    }

    void speak() override
    {
        cout << "Cat " << name << " Says Meow" << endl;
    }
};

int main()
{
    Animal* buddy = new Dog("Buddy");
    Animal* whisker = new Cat("Whisker");

    buddy->speak();
    whisker->speak();

    delete buddy;
    delete whisker;

    return 0;
}