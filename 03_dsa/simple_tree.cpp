#include <iostream>
using namespace std;

// Tree Node
struct Node {
	int data;
	Node* left;
	Node* right;

// Constructor
	Node(int value) {
		data = value;
		left = nullptr;
		right = nullptr;
	}
};

// Function to build a complete sample binary tree
Node* buildTree() {
	/*
	              1
	            /   \
	           2     3
	          / \   / \
	         4   5 6   7
	            /   \
	           8     9
	*/
	Node* root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->right = new Node(5);

	root->right->left = new Node(6);
	root->right->right = new Node(7);

	root->left->left->left = new Node(8);
	root->left->left->right = new Node(9);

	return root;
}

// Preorder traversal to verify structure
void preorder(Node* root) {
	if (root == nullptr)
		return;
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

int main() {
	Node* root = buildTree();
	cout << "Tree built successfully!\n";
	cout << "Preorder Traversal: ";
	preorder(root);
	cout << endl;

// Clean up memory (optional for demo)
// deleteTree(root);  // Add delete function if needed

	return 0;
}
