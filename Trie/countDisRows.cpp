#include <bits/stdc++.h>
using namespace std;

struct TrieNode {
    TrieNode *child[2];
    TrieNode() {
        child[0] = child[1] = NULL;
    }
};

// TrieNode *root = new TrieNode();

// // Time Complexity   ----->    O(length of key)
// bool search(string &key) {
//     TrieNode *curr = root;
//     for (int i = 0; i < key.length(); i++) {
//         int idx = key[i] - 'a';
//         if (curr->child[idx] == NULL)
//             return false;
//         curr = curr->child[idx];
//     }
//     return curr->isEnd;
// }

// Time Complexity   ----->    O(length of key)
bool insert(TrieNode *root, int row, vector<vector<int>> mat) {
    TrieNode *curr = root;
    bool f = 0;
    for (int i = 0; i < mat.size(); i++) {
        int idx = mat[row][i];
        if (curr->child[idx] == NULL){
            curr->child[idx] = new TrieNode();
            f = 1;
        }
        curr = curr->child[idx];
    }
    return f;
}

int counDis(vector<vector<int>> mat) {
    TrieNode *root = new TrieNode();
    int res = 0;
    for (int row = 0; row < mat[0].size(); row++){
        if(insert(root, row, mat))
            res++;
    }
    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];
    cout << counDis(mat);
    return 0;
}