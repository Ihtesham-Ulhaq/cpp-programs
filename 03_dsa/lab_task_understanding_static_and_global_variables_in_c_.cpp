#include <iostream>
using namespace std;

// Global variable
int globalVar = 0;

// Function to modify global variable
void modifyGlobal() {
    globalVar++;
    cout << "GlobalVar = " << globalVar << endl;
}

// Function with static variable
void demonstrateStatic() {
    static int staticVar = 0;  // retains value between calls
    staticVar++;
    cout << "StaticVar = " << staticVar << endl;
}

int main() {
    cout << "Global Variable Demonstration:\n";
    modifyGlobal();
    modifyGlobal();
    modifyGlobal();

    cout << "\nStatic Variable Demonstration:\n";
    demonstrateStatic();
    demonstrateStatic();
    demonstrateStatic();

    return 0;
}
