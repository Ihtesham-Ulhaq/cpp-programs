#include <iostream>
using namespace std;

// Function to find the largest and smallest elements in an array
void findLargestSmallest(int arr[], int size, int &largest, int &smallest) {
    largest = arr[0];
    smallest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
}

int main() {
    int arr[] = {10, 45, 23, 78, 5, 90, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest, smallest;

    // Calling the function
    findLargestSmallest(arr, size, largest, smallest);

    // Output the results
    cout << "Largest element: " << largest << endl;
    cout << "Smallest element: " << smallest << endl;

    return 0;
}