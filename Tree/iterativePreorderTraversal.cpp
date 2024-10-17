#include <iostream>
#include <stack>

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

    // Method to perform Preorder Traversal (DFS) using a stack
    void preorderTraversal() {
        if (root == nullptr) {
            cout << "Tree is empty." << endl;
            return;
        }

        // Stack to store the nodes for DFS traversal
        stack<Node*> s;
        s.push(root);

        // Iterate while the stack is not empty
        while (!s.empty()) {
            // Pop the top node from the stack
            Node* current = s.top();
            s.pop();

            // Print the data of the current node (preorder step: visit root first)
            cout << current->data << " ";

            // Push the right child first, so that left child is processed first
            if (current->right != nullptr)
                s.push(current->right);

            // Push the left child to the stack
            if (current->left != nullptr)
                s.push(current->left);
        }

        cout << endl;
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

    // Perform Preorder Traversal (DFS) using stack
    cout << "Preorder Traversal (DFS) of the Binary Tree: ";
    tree.preorderTraversal();

    return 0;
}
