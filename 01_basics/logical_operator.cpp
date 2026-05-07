#include <iostream>
using namespace std;
int main() 
{
    bool x, y, z;
    cout << "Enter three Boolean values (0 for false, 1 for true): ";
    cin >> x >> y >> z;

    // Logical expressions
    cout << "x && y: " << (x && y) << endl;
    cout << "y || z: " << (y || z) << endl;
    cout << "!x: " << (!x) << endl;
    cout << "!y: " << (!y) << endl;
    cout << "!z: " << (!z) << endl;
    cout << "x && (y || z): " << (x && (y || z)) << endl;
    cout << "(x || y) && !z: " << ((x || y) && !z) << endl;

    return 0;
}