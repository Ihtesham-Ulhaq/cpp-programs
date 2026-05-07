#include<iostream>
using namespace std;

struct Student{
	int id;
	string name;
	float gpa;
};
int main()
{

Student students[3]; // Array of 3 Student structures

students[0] = {101, "Ali", 3.8};
students[1] = {102, "Bilal", 3.5};
students[2] = {103, "Chaudhry", 3.9};

for (int i = 0; i < 3; i++) {
    cout << "ID: " << students[i].id << ", Name: " << students[i].name << ", GPA: " << students[i].gpa << endl;
             }
}