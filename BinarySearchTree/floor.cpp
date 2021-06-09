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

int floor(Node *root,int x)
{
    Node * res = NULL;
    while(root!=NULL)
    {
       if(root->key == x)
       return root->key;
       else if(root->key > x)
       root = root->left;
       else{
           res = root;
           root = root->right;
       }
    }
    return res->key;
}

int main()
{
    Node *root = new Node(50);
    root->left = new Node(30);
    root->left->left = new Node(20);
    root->right = new Node(70);
    root->right->left = new Node(60);
    root->right->left->left = new Node(55);
    root->right->right = new Node(80);
    cout<<floor(root, 22);
}