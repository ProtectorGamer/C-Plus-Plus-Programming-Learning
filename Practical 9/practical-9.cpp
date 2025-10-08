#include <iostream>
#include <string>

using namespace std;

class publication
{
    private:
    string title;
    float price;

    public:
    void getdata()
    {
        cout << "Enter Title " << endl;
        getline(cin, title);

        cout << "Enter Price : " << endl;
        cin >> price;

        cin.ignore();
    }

    void putdata()
    {
        cout << "Title : " << title << endl;
        cout << "Price : " << price << endl;
    }


};

class book : public publication
{
    private:
    int pagecount;

    public:
    void getdata()
    {
        publication::getdata();

        cout << "Enter Page Count : " << endl;
        cin >> pagecount;
        cin.ignore();
    }

    void putdata()
    {
        publication::putdata();
        cout << "Page Count : " << pagecount << endl;
    }
};

class tape : public publication
{
    private:

    float playtime;

    public:

    void getdata()
    {
        publication::getdata();

        cout << "Enter Play Time in minutes : " << endl;
        cin >> playtime;
        cin.ignore();
    }

    void putdata()
    {
        publication::putdata();

        cout << "Play time : " << playtime << endl;
    }
};

int main()
{
    book b1;
    tape t1;

    cout << "Enter Book Details : " << endl;
    b1.getdata();

    cout << "Enter Tape Data : " << endl;
    t1.getdata();

    cout << "Book Details : " << endl;
    b1.putdata();

    cout << "Tape Details : " << endl;
    t1.putdata();

    return 0;
}
