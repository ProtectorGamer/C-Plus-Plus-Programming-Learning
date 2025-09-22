#include <iostream>
using namespace std;

class Distance
{
    private:
    int kmeter;
    int meter;

    public:
    Distance() 
    {
        kmeter = 0;
        meter = 0;
    }

    Distance(float miles) 
    {
        float totalMeters = miles * 1609.34f;
        kmeter = static_cast<int>(totalMeters) / 1000;
        meter = static_cast<int>(totalMeters) % 1000;
    }

    operator float() 
    {
        float totalMeters = kmeter * 1000 + meter;
        return totalMeters / 1609.34f;
    }

    void display() 
    {
        cout << kmeter << " km " << meter << " m" << endl;
    }
};

int main() {
    Distance d1(2.5f);
    d1.display();

    float miles = d1;
    cout << "Distance in miles: " << miles << endl;

    return 0;
}