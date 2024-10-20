#include<iostream>
using namespace std;

// Node - Element of a tree is called node. Node can have a data, and it's next node(child) address using pointers
// Root - Top Node of tree is called Root.
// Parent - Those who have children.
// Child - Those who are connected to a parent node.
// Leaf - Those don't have child.
// Sibling - Those who have same parent.
// Ancestor - Current node if we go above of it then those are ancestors.
// Decendent - if we go down of a node then all of those are decendents.

// Structure of Tree

/*
Node {
    int data;
    Node* left;
    Node* right;
}
*/


class node {
    public:
        int data;
        node *left;
        node *right;

    node (int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

node* buildTree(node* root) {
    int data;
    cout<<"Building tree..."<<endl;
    cout<<"Enter the data"<<endl;
    cin>>data;
    root = new node(data);

    if (data == -1) {
        return NULL;
    }

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

int main() {
    node* root = nullptr;
    root = buildTree(root);
}