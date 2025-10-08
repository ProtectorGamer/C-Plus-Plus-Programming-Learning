#include <iostream>
#include <string>

using namespace std;

class Member
{
    private:
    string membername;
    int memberid;
    float monthlyfee;
    static int tm;

    public:

    Member(string name, int id, float fee)
    {
        tm++;
        membername = name;
        memberid = id;
        monthlyfee = fee;
    }

    ~Member()
    {
        cout << "Member ID : " << memberid << endl;
        cout << "Member is removed " << endl;
        tm--;
    }

 /*   float operator + (const Member &m)
    {
        return this->monthlyfee + m.monthlyfee;
    }*/

    friend float operator + (const Member &m);

    friend void updatefee(Member &m, float newfee);
    
    void display()
    {
        cout << "Member Name : " << membername << endl;
        cout << "Member ID : " << memberid << endl;
        cout << "Member Fee : " << monthlyfee << endl;
    }

    static void ttm()
    {
        cout << "Total Members : " << tm << endl;
    }
};

int Member::tm = 0;

float operator + (const Member &m)
{
    return this->monthlyfee + m.monthlyfee;
}

void updatefee(Member &m, float newfee)
{
    cout << "Updating the fee " << endl;
    m.monthlyfee = newfee;
}

int main()
{
    Member m1("test", 1, 100);
    Member m2("Test2", 2, 101);

    m1.display();
    m2.display();

    float totalf = m1 + m2;
    
    cout << "Total Fee : " << totalf << endl;

    updatefee(m2, 1000);

    m2.display();

    Member::ttm;

    return 0;
}