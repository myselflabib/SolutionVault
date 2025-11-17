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
    if(root) q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node* myLeft, *myRight;
        if(l==-1) myLeft = NULL;
            else myLeft = new Node(l);
        if(r==-1) myRight = NULL;
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

void print_tree(Node* root){
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        cout << f->val << " ";

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
}

bool search(Node* root, int val){
    if(root == NULL)
        return false;
    if(root->val == val)
        return true;
    
    if(root->val > val){
        // bool l = search(root->left, val);
        // return l;
        return search(root->left, val);
    }
    if(root->val < val){
        // bool r = search(root->right, val);
        // return r;
        return search(root->right, val);
    }
}

int main()
{
    Node* root = input_tree();
    //print_tree(root);
    int val;
    cin >> val;

    if(search(root, val)) cout << "Found" << endl;
    else cout << "Not Found" << endl;
    return 0;
}