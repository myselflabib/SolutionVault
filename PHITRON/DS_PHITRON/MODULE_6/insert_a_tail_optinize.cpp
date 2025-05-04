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

void print_link_list(Node* head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main(){

    Node* head = new Node(10); 
    Node* a = new Node(20);    
    Node* tail = new Node(30);    

    head->next = a;
    a->next = tail;

    insert_at_tail(head, tail, 100);
    insert_at_tail(head, tail, 200);
    insert_at_tail(head, tail, 300);
    insert_at_tail(head, tail, 400);

    print_link_list(head);
    cout << "tail = " << tail->val << endl;
    return 0;
}