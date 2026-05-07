#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
	Node(int value) {
		data = value;
		left = right = nullptr;
	}
};

// Function to create a sample tree
Node* createSampleTree() {
	/*
	        1
	       / \
	      2   3
	     / \
	    4   5
	*/
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	return root;
}

int main() {
	Node* root = createSampleTree();
	cout << "Tree created! Root value: " << root->right->data << endl;
	return 0;
}
