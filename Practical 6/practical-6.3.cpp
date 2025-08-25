#include <iostream>

using namespace std;

class test 
{
    private:
        static test* instance;
        int data;

    test() 
    {
        data = 0;
    }

    public:

        static test* getInstance() 
        {
            if (instance == nullptr) 
            {
                instance = new test();
            }
            return instance;
        }

    int getData() 
    {
        return data;
    }

    void setData(int data) 
    {
        this->data = data;
    }
};

test* test::instance = nullptr;

int main() 
{
    test* s = test::getInstance();

    cout << "Initial Data: " << s->getData() << endl;

    s->setData(69);

    cout << "Updated Data: " << s->getData() << endl;

    return 0;
}