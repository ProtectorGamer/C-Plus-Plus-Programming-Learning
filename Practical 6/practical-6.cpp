#include <iostream>
using namespace std;

class test
{
    private:
        static int a;
        int b = 0;

    public:
        static void count();
        void counting()
        {
            b++;
            cout << "Output (b) = " << b << endl;
        }
};

int test::a = 0;

void test::count()
{
    a++;
    cout << "Output (a) = " << a << endl;
}

int main()
{
    test obj1;
    test obj2;

    obj1.count();
    obj1.counting();

    obj2.count();
    obj2.counting();

    return 0;
}
