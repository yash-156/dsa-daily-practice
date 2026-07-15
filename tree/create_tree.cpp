#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

Node* createTree() {
    cout << "Enter node data: ";
    int data;
    cin >> data;
    if (data == -1) return nullptr;
    Node* root = new Node(data);
    cout << "Enter data for left child of " << data << ": ";
    root->left = createTree();
    cout << "Enter data for right child of " << data << ": ";
    root->right = createTree();
    return root;
}

void printTree(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    printTree(root->left);
    printTree(root->right);
}

int main() {
    Node* root = createTree();
    cout << "\nTree Traversal: ";
    printTree(root);
    return 0;
}