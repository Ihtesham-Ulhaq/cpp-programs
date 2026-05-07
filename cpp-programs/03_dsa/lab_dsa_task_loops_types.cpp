#include <iostream>
using namespace std;

int main() {

	// Print numbers 1 to 10 using for loop

	for (int i = 1; i <= 10; i++) {
		cout << i << " ";
	}
	cout<<"\n______________________________________________"<<endl;

	// Print numbers 1 to 10 using while loop

	int j = 1;
	while (j <= 10) {
		cout << j << " ";
		j++;
	}
	cout<<"\n______________________________________________"<<endl;

	// Print numbers 1 to 10 using do-while loop

	int k = 1;
	do {
		cout << k << " ";
		k++;
	} while (k <= 10);

	cout<<"\n______________________________________________"<<endl;

	// Multiplication table from 1 to 3

	for (int l = 1; l <= 3; l++) {
		for (int m = 1; m <= 3; m++) {
			cout << l << " x " << m << " = " << l * m << "\t";
		}
		cout << endl; // new line after each row
	}


	cout<<"\n______________________________________________"<<endl;
	// Sequential program: simple calculation
	int a, b, sum, product;

	// Step 1: Input
	cout << "Enter two numbers: ";
	cin >> a >> b;

	// Step 2: Process (sequentially)
	sum = a + b;          // first statement
	product = a * b;      // second statement

	// Step 3: Output (sequentially)
	cout << "Sum = " << sum << endl;        // third statement
	cout << "Product = " << product << endl; // fourth statement

	return 0;
}

