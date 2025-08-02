#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Welcome to ProtectorGamer GitHub Account\n", "We'll be going to Learn C++ in this whole Repository. Make sure to Follow me and Enjoy my work!\n", "Please refer to my C Programming to know full detail about me\n"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
