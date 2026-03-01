#include<iostream>

using namespace std;

class Node {
    public:
        int val;
        Node* left;
        Node* right;

        Node(int x) {
            val = x;
            left = right = NULL;
        }
};

Node* insert(Node* root, int val) {
    if (root == NULL) return new Node(val);

    if (val < root -> val) {
        root -> left = insert(root -> left, val);
    } else {
        root -> right = insert(root -> right, val);
    }
    return root;
}
Node* buildTree(int arr[], int n) {
    Node* root = NULL;
    for (int i=0; i<n; i++) {
        root = insert(root, arr[i]);
    }
    return root;
}   

// traverse INORDER
// left -> root -> right
void traverseInorder(Node* root) {
    if (root == NULL) return;
    traverseInorder(root -> left);
    cout<< root -> val << " ";
    traverseInorder(root -> right);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 2, 1, 5, 6, 4};
    Node* nul = NULL;
    Node* root = buildTree(arr2, 6);
    traverseInorder(root);
    return 0;
}