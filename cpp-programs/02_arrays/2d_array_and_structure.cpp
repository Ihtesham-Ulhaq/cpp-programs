#include <iostream>
#include <string>
using namespace std;

// Define a structure for Student
struct Student {
    int id;
    string name;
    float gpa;
};

int main() {
    // Example of 2-D Array
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "2-D Array (Matrix):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Example of Structure
    Student students[3] = {
        {101, "Ali", 3.8},
        {102, "Bilal", 3.5},
        {103, "Chaudhry", 3.9}
    };

    cout << "\nStudent Records:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "ID: " << students[i].id << ", Name: " << students[i].name << ", GPA: " << students[i].gpa << endl;
    }

    return 0;
}