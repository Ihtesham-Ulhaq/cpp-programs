#include <iostream>
#include <cmath>
using namespace std;

double calculateArea(double length, double breadth) {
    return length * breadth;  // Rectangle
}
double calculateArea(double radius) {
    return 3.14159 * radius * radius;  // Circle
}
double calculateArea(int base, int height) {
    return 0.5 * base * height;  // Triangle
}

int main() {
    cout << "Rectangle Area: " << calculateArea(5.0, 3.0) << endl;
    cout << "Circle Area: " << calculateArea(4.0) << endl;
    cout << "Triangle Area: " << calculateArea(6, 4) << endl;
    return 0;
}
