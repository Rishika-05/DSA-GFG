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
    if(root==NULL) return;
    stack <Node *> s;
    Node *curr = root;
    while(curr != NULL || s.empty()==false)
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout<<curr->key<<" ";
        curr = curr->right;
    }
}

void preorder(Node *root)
{
    if(root==NULL) return;
    stack <Node *> s;
    Node *curr = root;
    while(curr != NULL || s.empty()==false)
    {
        while(curr!=NULL)
        {
            cout<<curr->key<<" ";
            if(curr->right!=NULL)
            s.push(curr->right);
            curr = curr->left;
        }
        if(s.empty()==false){
        curr = s.top();
        s.pop();
        }
    }
}

void postorder(Node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->key << " ";
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->left->left = new Node(80);
    root->left->left->right = new Node(90);
    root->left->right = new Node(50);
    root->right = new Node(30);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    cout<<"Inorder : ";
    inorder(root);
    cout << "\nPreorder : ";
    preorder(root);
    cout << "\nPostorder : ";
    postorder(root);
    return 0;
}