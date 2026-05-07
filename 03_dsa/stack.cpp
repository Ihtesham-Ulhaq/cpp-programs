#include<iostream>
using namespace std;

#define MAX 5

class stack {
	private:
		int arr[5];
		int top;

	public:
		stack() {
			top = -1;
		}
		void push(int x) {
			if (top >=MAX -1) {
				cout<<"stack overflow\n";
				return;
			}
			arr[++top]=x;
			cout<< x << " pushed into stack\n";
		}
		void pop() {
			if(top<0) {
				cout<<"stack underflow";
				return;
			}
			cout<<arr[top]<<" popped from stack\n";
			    top--;
		}

};
int main () {
	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	return 0;
}