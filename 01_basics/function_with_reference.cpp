#include <iostream>
using namespace std;

void increment(int &num) { // Pass by reference
    num = num + 1; // Modifies original variable
    cout << "Inside function: " << num << endl;
}

int main() {
    int value = 10;
    increment(value); // Pass reference
    
    cout << "Outside function: " << value << endl; // Original value is changed
    return 0;
}
