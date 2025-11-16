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

int countNode(Node* root){
    if(root==NULL){
        cout << "No tree" << endl;
        return 0;
    }

    int count = 0;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        //cout << f->val << " ";
        count++;

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }

    return count;
    
}

int main()
{
    Node* root = input_tree();
    int treeNode = countNode(root);
    int height = maxHeight(root);

    int perfectTree = (pow(2, height+1))-1;
    if(treeNode == perfectTree) cout << "YES" << endl;
    else cout << "NO" << endl;

    //cout << perfectTree << " " << treeNode;



    return 0;
}