#include <iostream>
#include <cmath>
using namespace std;

int calculatePower(int base, int exp) {
    return pow(base, exp);
}
double calculatePower(double base, int exp) {
    return pow(base, exp);
}

int main() {
    cout << "2^5 = " << calculatePower(2, 5) << endl;
    cout << "2.5^3 = " << calculatePower(2.5, 3) << endl;
    return 0;
}
