#include <iostream>
using namespace std;
int main() 

{
    int x = 10;
    cout << "Initial value of x: " << x << endl;

    x += 7;   // Equivalent to x = x + 7
    cout << "After x += 7, x = " << x << endl;

    x -= 4;   // Equivalent to x = x - 4
    cout << "After x -= 4, x = " << x << endl;

    x *= 3;   // Equivalent to x = x * 3
    cout << "After x *= 3, x = " << x << endl;

    x /= 2;   // Equivalent to x = x / 2
    cout << "After x /= 2, x = " << x << endl;

    x %= 3;   // Equivalent to x = x % 3
    cout << "After x %= 3, x = " << x << endl;

    return 0;
}