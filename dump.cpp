#include <iostream>
#include <fstream>
#include <string> 

using namespace std;

int main()
{
    ifstream fin("source.txt");

    ofstream fout("destination.txt");

    string line;

    if(!fin)
    {
        cout << "File does not exist" << endl;
    }
    cout << "input the Information : " << endl;
    while(getline(fin, line))
    {
        fout << line << endl;
    }

    fin.close();
    fout.close();
}