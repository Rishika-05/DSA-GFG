#include <bits/stdc++.h>
using namespace std;

struct TrieNode {
    TrieNode *child[26] = {NULL};
    bool isEnd;
    TrieNode() {
        isEnd = false;
    }
};

TrieNode *root = new TrieNode();


// Time Complexity   ----->    O(length of key)
bool search(string &key){
    TrieNode *curr = root;
    for (int i = 0; i < key.length(); i++) {
        int idx = key[i] - 'a';
        if (curr->child[idx] == NULL)
            return false;
        curr = curr->child[idx];
    }
    return curr->isEnd;
}

// Time Complexity   ----->    O(length of key)
void insert(string &key){
    TrieNode *curr = root;
    for (int i = 0; i < key.length(); i++) {
        int idx = key[i] - 'a';
        if (curr->child[idx] == NULL)
            curr->child[idx] = new TrieNode();
        curr = curr->child[idx];
    }
    curr->isEnd = true;
}

bool isEmpty(TrieNode *root){
    for (int i = 0; i < 26; i++)
    if(root->child[i] != NULL)
        return false;
    return true;
}

TrieNode* delKey(TrieNode* root, string &key, int i){
    if(root == NULL)
        return NULL;
    if(i == key.length()){
        root->isEnd = false;
        if(isEmpty(root)){
            delete (root);
            root = NULL;
        }
        return root;
    }
    int idx = key[i] - 'a';
    root->child[idx] = delKey(root->child[idx], key, i++);
    if(isEmpty(root) && !root->isEnd){
        delete (root);
        root = NULL;
    }
    return root;
}

int main() {
    return 0;
}