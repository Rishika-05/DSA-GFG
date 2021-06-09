#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

// Time --> O(h).
// Aux Space --> iterative - O(1)    recurcive - O(h).

Node *insert(Node *root, int x)
{
    Node *ptr = new Node(x);
    if (root == NULL)
        return ptr;
    else if (root->key < x)
        root->right = insert(root->right, x);
    else if (root->key > x)
        root->left = insert(root->left, x);
    return root;
}

Node *insert2(Node *root, int x)
{
    Node *ptr = new Node(x);
    Node *parent = NULL, *curr = root;
    while (curr != NULL)
    {
        parent = curr;
        if (curr->key > x)
            curr = curr->left;
        else if (curr->key < x)
            curr = curr->right;
        else
            return root;
    }
    if (parent == ptr)
        return ptr;
    if (ptr->key > x)
        parent->left = ptr;
    else if (parent->key < x)
        parent->right = ptr;

    return root;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->right = new Node(18);
    root->right->left = new Node(12);
    inorder(root);
    cout << "\n";
    root = insert(root, 20);
    inorder(root);
}