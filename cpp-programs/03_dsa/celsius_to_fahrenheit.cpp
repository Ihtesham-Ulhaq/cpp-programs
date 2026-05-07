#include <iostream>
using namespace std;

double convertToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    double tempC[10];
    cout << "Enter 10 temperatures in Celsius: ";
    for(int i = 0; i < 10; i++) cin >> tempC[i];

    cout << "Temperatures in Fahrenheit: ";
    for(int i = 0; i < 10; i++) cout << convertToFahrenheit(tempC[i]) << " ";
    cout << endl;
    return 0;
}
