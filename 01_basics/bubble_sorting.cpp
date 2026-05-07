#include <iostream>
using namespace std;

// Function to perform Bubble Sort
void bubbleSort(int arr[], int size, bool ascending = true) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Swap if the order is incorrect based on sorting type
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    // Sorting in ascending order
    bubbleSort(arr, size, true);
    cout << "Sorted in Ascending Order: ";
    printArray(arr, size);

    // Sorting in descending order
    bubbleSort(arr, size, false);
    cout << "Sorted in Descending Order: ";
    printArray(arr, size);

    return 0;
}
