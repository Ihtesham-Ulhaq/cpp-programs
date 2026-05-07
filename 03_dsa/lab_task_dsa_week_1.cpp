#include<iostream>
using namespace std;

int main() {

	int ary[5];

// 1. Array Initialization and Display (Manual Indexing):
	cout<<"Enter 5 elements: ";
	cin>>ary[0];
	cin>>ary[1];
	cin>>ary[2];
	cin>>ary[3];
	cin>>ary[4];

	cout<<"array elements: ";
	cout<<ary[0]<<endl;
	cout<<ary[1]<<endl;
	cout<<ary[2]<<endl;
	cout<<ary[3]<<endl;
	cout<<ary[4]<<endl;


// 2. Sum of aryay Elements (Manual Calculation):
	int sum = ary[0] + ary[1] + ary[2] + ary[3] + ary[4];
	cout << "Sum = " << sum << endl;



// 3. Find Maximum Element
	int max = ary[0];
	if(ary[1] > max) max = ary[1];
	if(ary[2] > max) max = ary[2];
	if(ary[3] > max) max = ary[3];
	if(ary[4] > max) max = ary[4];
	cout << "Maximum = " << max << endl;

	// 4. Search for an Element
	int search;
	cout << "Enter value to search: ";
	cin >> search;
	if(search == ary[0]) cout << "Found at index 0\n";
	else if(search == ary[1]) cout << "Found at index 1\n";
	else if(search == ary[2]) cout << "Found at index 2\n";
	else if(search == ary[3]) cout << "Found at index 3\n";
	else if(search == ary[4]) cout << "Found at index 4\n";
	else cout << "Value not found\n";

	// 5. Reverse array
	cout << "array in reverse: " << ary[4] << " " << ary[3] << " " << ary[2] << " " << ary[1] << " " << ary[0] << endl;

	// 6. Insert at Specific Position (Manual Shift)
	int value, pos;
	cout << "Enter value to insert: ";
	cin >> value;
	cout << "Enter position (0-4): ";
	cin >> pos;

	int newary[6];
	if(pos == 0) {
		newary[0] = value;
		newary[1] = ary[0];
		newary[2] = ary[1];
		newary[3] = ary[2];
		newary[4] = ary[3];
		newary[5] = ary[4];
	} else if(pos == 1) {
		newary[0] = ary[0];
		newary[1] = value;
		newary[2] = ary[1];
		newary[3] = ary[2];
		newary[4] = ary[3];
		newary[5] = ary[4];
	} else if(pos == 2) {
		newary[0] = ary[0];
		newary[1] = ary[1];
		newary[2] = value;
		newary[3] = ary[2];
		newary[4] = ary[3];
		newary[5] = ary[4];
	} else if(pos == 3) {
		newary[0] = ary[0];
		newary[1] = ary[1];
		newary[2] = ary[2];
		newary[3] = value;
		newary[4] = ary[3];
		newary[5] = ary[4];
	} else {
		newary[0] = ary[0];
		newary[1] = ary[1];
		newary[2] = ary[2];
		newary[3] = ary[3];
		newary[4] = value;
		newary[5] = ary[4];
	}

	cout << "Array after insertion: ";
	for(int i = 0; i < 6; i++) cout << newary[i] << " ";
	cout << endl;

	return 0;
}

