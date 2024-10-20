#include <iostream>
using namespace std;

// Node class to represent each node in the binary tree
class Node {
    public:
        int data;
        Node* left;
        Node* right;

        // Constructor to initialize node
        Node(int data) {
            this->data = data;
            this->left = nullptr;
            this->right = nullptr;
        }
};

// BinaryTree class
class BinaryTree {
    public:
        Node* root;

        // Constructor to initialize an empty tree
        BinaryTree() {
            root = nullptr;
        }

        // Insert a new node in the binary tree (for simplicity, insert as BST)
        Node* insert(Node* node, int data) {
            // If the tree is empty, return a new node
            if (node == nullptr) {
                return new Node(data);
            }

            // Otherwise, recursively insert data into the left or right subtree
            if (data < node->data) {
                node->left = insert(node->left, data);
            } else if (data > node->data) {
                node->right = insert(node->right, data);
            }

            return node;
        }

        // In-order traversal of the tree (Left, Root, Right)
        void inorderTraversal(Node* node) {
            if (node == nullptr) {
                return;
            }

            inorderTraversal(node->left);
            cout << node->data << " ";
            inorderTraversal(node->right);
        }
};

int main() {
    // Create a binary tree
    BinaryTree tree;

    // Insert nodes
    tree.root = tree.insert(tree.root, 10);
    tree.insert(tree.root, 5);
    tree.insert(tree.root, 20);
    tree.insert(tree.root, 3);
    tree.insert(tree.root, 7);
    tree.insert(tree.root, 15);
    tree.insert(tree.root, 25);

    // Display in-order traversal
    cout << "In-order Traversal: ";
    tree.inorderTraversal(tree.root);
    cout << endl;

    return 0;
}
