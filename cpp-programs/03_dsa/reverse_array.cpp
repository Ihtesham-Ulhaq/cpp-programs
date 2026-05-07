#include <iostream>
using namespace std;

void reverseArray(char arr[], int size) {
    for(int i = 0; i < size/2; i++) {
        char temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
}

int main() {
    char arr[6];
    cout << "Enter 6 characters: ";
    for(int i = 0; i < 6; i++) cin >> arr[i];

    reverseArray(arr, 6);

    cout << "Reversed Array: ";
    for(int i = 0; i < 6; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
