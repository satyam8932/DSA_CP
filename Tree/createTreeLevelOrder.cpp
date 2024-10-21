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

    // Method to perform in-order traversal (L-N-R)
    void createTreeFromLevelOrder(Node *&root) {  // Pass root by reference
        queue<Node*> q;
        int data;
        cout << "Enter data for root: ";
        cin >> data;
        
        if (data != -1) {
            root = new Node(data);  // Modify root directly
            q.push(root);
        }

        while (!q.empty()) {
            Node* temp = q.front();
            q.pop();

            // For the left child
            cout << "Enter data for left child of " << temp->data << ": ";
            cin >> data;
            if (data != -1) {
                temp->left = new Node(data);
                q.push(temp->left);
            }

            // For the right child
            cout << "Enter data for right child of " << temp->data << ": ";
            cin >> data;
            if (data != -1) {
                temp->right = new Node(data);
                q.push(temp->right);
            }
        }
    }
};

// Main function
int main() {
    // Creating a Binary Tree
    BinaryTree tree;

    // Create tree from level order input
    tree.createTreeFromLevelOrder(tree.root);

    return 0;
}
