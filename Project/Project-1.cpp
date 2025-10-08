#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main() {
    string key;
    cout << "KeyLogger System | Simple\n" << "Press ESC to Exit. \nContinue your Logging : " << endl;

    while (true) 
    {
        key = _getch();
        if (key == 27) 
        {
            cout << "\nExit the code successfully\n";
            break;
        }
        cout << "You pressed: " << key << endl;
    }
    return 0;
}

//Reference Key Codes : https://asawicki.info/nosense/doc/devices/keyboard/key_codes.html#:~:text=17%20%2D%20Ctrl,27%20%2D%20Esc
//Reference Information : https://en.wikipedia.org/wiki/Conio.h - Conio.h
//Getch() Reference : https://www.geeksforgeeks.org/c/getch-function-in-c-with-examples/