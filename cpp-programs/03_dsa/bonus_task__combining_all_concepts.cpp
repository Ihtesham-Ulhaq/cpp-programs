#include <iostream>
#include <cmath>
using namespace std;

// Square each element (element by element)
int square(int n) {
    return n * n;
}

// Sum of array (whole array)
int calculate(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) sum += arr[i];
    return sum;
}

// Overloaded function for average
double calculate(double a, double b, double c) {
    return (a + b + c) / 3.0;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Squares: ";
    for(int i = 0; i < 5; i++) cout << square(arr[i]) << " ";
    cout << endl;

    cout << "Sum = " << calculate(arr, 5) << endl;

    cout << "Average of (4, 8, 12) = " << calculate(4.0, 8.0, 12.0) << endl;
    return 0;
}
