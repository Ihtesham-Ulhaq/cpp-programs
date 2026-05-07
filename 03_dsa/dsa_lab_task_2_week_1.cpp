#include <iostream>
using namespace std;

int main() {
	int arr[10], n = 5;

	// 1. Input & Output
	cout << "Enter " << n << " elements: ";
	for(int i = 0; i < n; i++) cin >> arr[i];

	cout << "Array: ";
	for(int i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;

	// 2. Sum of Array Elements
	int sum = 0;
	for(int i = 0; i < n; i++) sum += arr[i];
	cout << "Sum = " << sum << endl;

	// 3. Max & Min
	int max = arr[0], min = arr[0];
	for(int i = 1; i < n; i++) {
		if(arr[i] > max) max = arr[i];
		if(arr[i] < min) min = arr[i];
	}
	cout << "Max = " << max << ", Min = " << min << endl;

	// 4. Search
	int search;
	cout << "Enter value to search: ";
	cin >> search;
	bool found = false;
	for(int i = 0; i < n; i++) {
		if(arr[i] == search) {
			cout << "Found at index " << i << endl;
			found = true;
			break;
		}
	}
	if(!found) cout << "Value not found\n";

	// 5. Reverse Array
	cout << "Reverse: ";
	for(int i = n-1; i >= 0; i--) cout << arr[i] << " ";
	cout << endl;

	// 6. Insert Element
	int value, pos;
	cout << "Enter value to insert: ";
	cin >> value;
	cout << "Enter position (0-" << n << "): ";
	cin >> pos;

	for(int i = n; i > pos; i--) arr[i] = arr[i-1];
	arr[pos] = value;
	n++;

	cout << "After Insertion: ";
	for(int i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;

	// 7. Delete Element
	cout << "Enter position to delete (0-" << n-1 << "): ";
	cin >> pos;
	for(int i = pos; i < n-1; i++) arr[i] = arr[i+1];
	n--;

	cout << "After Deletion: ";
	for(int i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;

	return 0;
}
