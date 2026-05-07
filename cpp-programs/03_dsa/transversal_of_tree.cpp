#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    // Constructor - Use NULL instead of nullptr
    Node(int value) { 
        data = value; 
        left = NULL;      // Fixed
        right = NULL;     // Fixed
    }
};

// Preorder: Root -> Left -> Right
void preorder(Node* root) {
    if (root == NULL) return;           // Fixed
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder: Left -> Root -> Right
void inorder(Node* root) {
    if (root == NULL) return;           // Fixed
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Postorder: Left -> Right -> Root
void postorder(Node* root) {
    if (root == NULL) return;           // Fixed
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
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
   
    cout << "Preorder:  "; preorder(root);  cout << endl;
    cout << "Inorder:   "; inorder(root);   cout << endl;
    cout << "Postorder: "; postorder(root); cout << endl;
   
    return 0;
}

