#include <iostream>
using namespace std;

void display(int x) {
    cout << "Integer: " << x << endl;
}
void display(double y) {
    cout << "Double: " << y << endl;
}
void display(string s) {
    cout << "String: " << s << endl;
}

int main() {
    display(10);
    display(3.14);
    display("Hello World");
    return 0;
}
