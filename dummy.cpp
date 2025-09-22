#include<iostream>
using namespace std;

// Functions overloaded with different
// argument number and types
int add(int a, double b);
int add(double a, int b);

int main() {
    
    // Calling both overloaded versions
    cout << add(10, 2.5) << endl;
    cout << add(5.5, 6);
    return 0;
}

// Function definitions
int add(int a, double b) { 
    return a + (double)b;
}  
int add(double a, int b) {
    return (double)a + b;
}