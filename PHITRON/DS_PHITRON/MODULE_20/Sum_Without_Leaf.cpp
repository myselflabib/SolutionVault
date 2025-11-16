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


void sum_node(Node* root){
    if(root==NULL){
        cout << "No tree" << endl;
        return;
    }

    int count = 0;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        // cout << f->val << " ";
        if(f->left != NULL || f->right != NULL){
            count += f->val;
        }

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }

    cout << count << endl;
    
}

int main()
{
    Node* root = input_tree();
    sum_node(root);
    return 0;
}