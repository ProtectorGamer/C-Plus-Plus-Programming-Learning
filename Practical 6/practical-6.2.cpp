#include <iostream>

using namespace std;

class test
{
    private:
    int a;

    public:

    test()
    {
        a = 1;
        cout << "Program Executed" << endl;
    }

    ~test()
    {
        cout << "Destructor Executed" << endl;
    }

};

static test obj1;


void function()
{
    static test obj2;
}

int main()
{

    obj1;
    function();
}

