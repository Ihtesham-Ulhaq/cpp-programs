#include <iostream>
using namespace std;

void increment(int num) { // Pass by value
    num = num + 1; // Changes only the local copy
    cout << "Inside function: " << num << endl;
}

int main() {
    int value = 10;
    increment(value); // Pass value (copy)
    
    cout << "Outside function: " << value << endl; // Original value remains unchanged
    return 0;
}
