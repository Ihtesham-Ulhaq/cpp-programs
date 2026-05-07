#include <iostream>
using namespace std;

bool isEven(int n) {
    return (n % 2 == 0);
}

int main() {
    int arr[8];
    cout << "Enter 8 integers: ";
    for(int i = 0; i < 8; i++) cin >> arr[i];

    for(int i = 0; i < 8; i++) {
        cout << arr[i] << " is " << (isEven(arr[i]) ? "Even" : "Odd") << endl;
    }
    return 0;
}
