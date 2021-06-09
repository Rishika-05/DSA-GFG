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

Node *getSuccesor(Node *curr)
{
    curr = curr->right;
    while (curr != NULL && curr->left != NULL)
        curr = curr->left;
    return curr;
}

Node *delNode(Node *root, int x)
{
    if (root == NULL)
        return root;
    if (root->key > x)
        root->left = delNode(root->left, x);
    else if (root->key < x)
        root->right = delNode(root->right, x);
    else
    {
        if (root->left == NULL)
        {
            Node *temp = NULL;
            delete root;
            return temp;
        }
        else if (root->left == NULL)
        {
            Node *temp = NULL;
            delete root;
            return temp;
        }
        else
        {
            Node *succ = getSuccesor(root);
            root->key = succ->key;
            root->right = delNode(root->right, succ->key);
        }
    }
    return root;
}

int main()
{
    Node *root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);
    root->right->left = new Node(60);
    root->right->right = new Node(80);
    root->left->left = new Node(20);
    root->left->right = new Node(24);
    inorder(root);
    cout << "\n";
    root = delNode(root, 80);
    inorder(root);
}