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

void PrintLeft(Node *root)
{
    if (root == NULL) 
        return;

    PrintLeft(root->left);
    if(root->left == NULL && root->right) 
        PrintLeft(root->right);
        
        
    cout << root->val << " ";
}
void PrintRight(Node *root)
{
    if (root == NULL) 
        return;
    cout<<root->val<<" ";

    PrintRight(root->right);
    if(root->right == NULL && root->left) 
        PrintRight(root->left);
}

int main()
{
    Node* root = input_tree();
    //print_tree(root);


    PrintLeft(root->left);
    cout << root->val << " ";
    PrintRight(root->right);
    
    return 0;
}