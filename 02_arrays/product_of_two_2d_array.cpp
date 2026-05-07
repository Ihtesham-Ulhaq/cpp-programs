#include <iostream>
using namespace std;

int main() {
    int arr1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int arr2[3][3] = {
        {10, 11, 12},
        {13, 14, 15},
        {16, 17, 18}
    };
    
    int product[3][3] = {0}; // Initialize product matrix with 0
    
    // Performing Matrix Multiplication (rows of arr1 × columns of arr2)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            product[i][j] = 0; // Reset before summing
            
            for (int k = 0; k < 3; k++) {
                product[i][j] += arr1[i][k] * arr2[k][j]; // Dot product calculation
            }
        }
    }

    // Output the resultant matrix
    cout << "The product of the matrices is: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
