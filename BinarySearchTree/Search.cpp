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

// Worst --> O(height);
// Aux Space -->  Recursive - O(h)    Iterative - O(1)

void Search(Node *root, int x) // Recursive.
{
    if (root == NULL)
        cout << "Not Found.";
    else if (root->key == x)
        cout << "Found.";
    else if (root->key < x)
        return Search(root->right, x);
    else if (root->key > x)
        return Search(root->left, x);
}

string Search2(Node *root, int x) // Iterative
{
    while (root != NULL)
    {
        if (root->key == x)
            return "Found";
        else if (root->key > x)
            root = root->left;
        else
            root = root->right;
    }
    return "Not Found";
}

int main()
{
    Node *root = new Node(15);
    root->left = new Node(5);
    root->left->left = new Node(3);
    root->right = new Node(20);
    root->right->left = new Node(18);
    root->right->left->left = new Node(16);
    root->right->right = new Node(80);
    Search(root, 17);
}