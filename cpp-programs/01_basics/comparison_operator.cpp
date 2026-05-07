#include <iostream>
using namespace std;
int main() 
{
    int n1 , n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    // Perform and display comparison operations
    cout << "a < b: " << (n1 < n2) << endl;
    cout << "a > b: " << (n1 > n2) << endl;
    cout << "a <= b: " << (n1 <= n2) << endl;
    cout << "a >= b: " << (n1 >= n2) << endl;
    cout << "a == b: " << (n1 == n2) << endl;
    cout << "a != b: " << (n1 != n2) << endl;

    return 0;
}