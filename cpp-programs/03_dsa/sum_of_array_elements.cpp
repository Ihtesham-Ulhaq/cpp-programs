#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) sum += arr[i];
    return sum;
}

int main() {
    int arr[10];
    cout << "Enter 10 integers: ";
    for(int i = 0; i < 10; i++) cin >> arr[i];

    cout << "Sum = " << calculateSum(arr, 10) << endl;
    return 0;
}
