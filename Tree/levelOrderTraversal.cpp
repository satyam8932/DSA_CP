// Level Order Traversal or Breadth First Search

#include <iostream>
#include <queue>
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

    // Method to perform level order traversal
    void levelOrderTraversal() {
        if (root == nullptr) {
            cout << "Tree is empty." << endl;
            return;
        }

        // Queue to store the nodes at each level
        queue<Node*> q;
        q.push(root);

        // Iterate while the queue is not empty
        while (!q.empty()) {
            // Get the front node from the queue
            Node* current = q.front();
            q.pop();

            // Print the data of the current node
            cout << current->data << " ";

            // Enqueue left child
            if (current->left != nullptr)
                q.push(current->left);

            // Enqueue right child
            if (current->right != nullptr)
                q.push(current->right);
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

    // Perform level order traversal
    cout << "Level Order Traversal of the Binary Tree: ";
    tree.levelOrderTraversal();

    return 0;
}
