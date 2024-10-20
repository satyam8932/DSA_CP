#include <iostream>
using namespace std;

// Node structure for the binary tree
class Node {
public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Binary Tree class
class BinaryTree {
public:
    Node* root;

    // Constructor to initialize the root
    BinaryTree() {
        root = nullptr;
    }

    // Method to perform in-order traversal (L-N-R)
    void inOrderTraversal(Node* node) {
        if (node == nullptr) {
            return;
        }
        
        // Traverse the left subtree first
        inOrderTraversal(node->left);
        
        // Visit the current node
        cout << node->data << " ";
        
        // Traverse the right subtree
        inOrderTraversal(node->right);
    }
};

// Main function
int main() {
    // Creating a Binary Tree
    BinaryTree tree;

    // Manually creating nodes and forming a tree
    tree.root = new Node(1);
    tree.root->left = new Node(2);
    tree.root->right = new Node(3);
    tree.root->left->left = new Node(4);
    tree.root->left->right = new Node(5);
    tree.root->right->left = new Node(6);
    tree.root->right->right = new Node(7);

    // Perform in-order traversal
    cout << "In-Order Traversal of the Binary Tree: ";
    tree.inOrderTraversal(tree.root);  // Start traversal from the root
    cout << endl;

    return 0;
}
