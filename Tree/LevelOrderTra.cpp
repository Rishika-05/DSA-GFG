#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int height(Node *root)
{
    if (root == NULL)
        return 0;
    return max(height(root->left), height(root->right)) + 1;
}

void printCurrLevel(Node *root, int lvl)
{
    if (root == NULL)
        return;
    if (lvl == 1)
        cout << root->data << " ";
    else if (lvl > 1)
    {
        printCurrLevel(root->left, lvl - 1);
        printCurrLevel(root->right, lvl - 1);
    }
}

void printLevelOrder(Node *root)
{
    int h = height(root);
    for (int i = 1; i <= h; i++)
    {
        printCurrLevel(root, i);
    }
}

void LevelOrder(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        Node *cur = q.front();
        cout << cur->data << " ";
        q.pop();
        if (cur->left != NULL)
            q.push(cur->left);
        if (cur->right != NULL)
            q.push(cur->right);
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
    printLevelOrder(root);
    cout << "\n";
    LevelOrder(root);
}