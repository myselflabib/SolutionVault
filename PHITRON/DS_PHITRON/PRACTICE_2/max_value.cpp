#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this -> val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* Newnode = new Node(val);
    if(head == NULL){
        head = Newnode;
        tail = Newnode;
        return;
    }
    tail->next = Newnode;
    tail  = Newnode;
}

void print_max(Node* head){
    Node* max = head;
    for (Node* i = head; i != NULL; i= i->next)
    {
        if(i->next > max){
            max = i->next;
        }
    }
    cout << max->val << endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    
    print_max(head);
    
    return 0;
}