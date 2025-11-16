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


void leaf(Node* root){
    if(root==NULL){
        cout << "No tree" << endl;
        return;
    }

    vector<int> N;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        // cout << f->val << " ";
        if(f->left == NULL && f->right == NULL){
            N.push_back(f->val);
        }

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }

    sort(N.begin(), N.end());
    reverse(N.begin(), N.end());
    for (int i = 0; i < N.size(); i++)
    {
        cout << N[i] << " ";
    }
    
}

int main()
{
    Node* root = input_tree();
    leaf(root);
    return 0;
}