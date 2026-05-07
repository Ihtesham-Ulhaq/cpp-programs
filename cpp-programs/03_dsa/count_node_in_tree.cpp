#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) { data = value; left = right = nullptr; }
};

int countNodes(Node* root) {
    if (root == nullptr) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

Node* createSampleTree() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    return root;
}

int main() {
    Node* root = createSampleTree();
    cout << "Total nodes: " << countNodes(root) << endl;  // Output: 5
    return 0;
}

FIND HEIGHT OF TREE
#include <iostream>
#include <algorithm>  // for max()
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) { data = value; left = right = nullptr; }
};

int height(Node* root) {
    if (root == nullptr) return -1;  // Height of empty tree = -1
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return 1 + max(leftHeight, rightHeight);
}

Node* createSampleTree() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    return root;
}

int main() {
    Node* root = createSampleTree();
    cout << "Height of tree: " << height(root) << endl;  // Output: 2
    return 0;
}