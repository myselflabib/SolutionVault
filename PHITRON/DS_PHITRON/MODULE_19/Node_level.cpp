#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<pair<TreeNode<int>*, int> q;
    if(root)
        q.push({root, 1});
    
    while(!q.empty()){
        pair<TreeNode<int>* parent = q.front();
        q.pop();
        treeNode<int>* node = parent.first;
        int level = parent.second;

        if(node->val == searchValue)
            return level;

        if(node -> left)
            q.push(node->left, level+1);
        if(node->right)
            q.push(node->right, level+1);
    }
    return 0;
}