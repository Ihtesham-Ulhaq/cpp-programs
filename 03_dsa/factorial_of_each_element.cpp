#include <iostream>
using namespace std;

int findFactorial(int n) {
	int fact = 1;
	for(int i = 1; i <= n; i++) fact *= i;
	return fact;
}

int main() {
	int arr[5];
	cout << "Enter 5 numbers: ";
	for(int i = 0; i < 5; i++) cin >> arr[i];

	cout << "Factorials: ";
	for(int i = 0; i < 5; i++) {
		cout << findFactorial(arr[i]) << " ";
	}
	cout << endl;
	return 0;
}
