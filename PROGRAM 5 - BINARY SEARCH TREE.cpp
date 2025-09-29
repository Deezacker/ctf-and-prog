//Binary Search Tree
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
};
int main() {
    Node* root = new Node{50, NULL, NULL};
    Node* n1 = new Node{30, NULL, NULL};
    root->left = n1;
    Node* n2 = new Node{70, NULL, NULL};
    root->right = n2;
    cout << root->left->data << " ";
    cout << root->data << " ";
    cout << root->right->data << " ";

    return 0;
}
