#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree(){
    int val;
    cin >> val;

    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* myLeft, *myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);
        f->left = myLeft;
        f->right = myRight;

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }

    return root;
}


int maxHeight(Node* root){
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL)
        return 0;
    
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);

    return max(l, r)+1;
}


void level_nodes(Node* root, int x){
    if(root==NULL){
        //cout << "No tree" << endl;
        return;
    }

    queue<pair<Node*, int>> q;
    q.push({root, 0});
    while(!q.empty()){
        pair<Node*, int> parent = q.front();
        q.pop();

        Node* n = parent.first;
        int level = parent.second;

        // cout << f->val << " ";
        if(x == level)
            cout << n->val << " ";
        

        if(n->left)
            q.push({n->left, level+1});
        if(n->right)
            q.push({n->right, level+1});
    }
    
}

int main()
{
    int x;
    Node* root = input_tree();
    cin >> x;

    if(x>maxHeight(root)) cout << "Invalid" << endl;
    else level_nodes(root, x);


    return 0;
}