#include <iostream>
using namespace std;

void findMinMax(float arr[], int size) {
    float min = arr[0], max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    cout << "Smallest = " << min << ", Largest = " << max << endl;
}

int main() {
    float arr[7];
    cout << "Enter 7 floating numbers: ";
    for(int i = 0; i < 7; i++) cin >> arr[i];

    findMinMax(arr, 7);
    return 0;
}
