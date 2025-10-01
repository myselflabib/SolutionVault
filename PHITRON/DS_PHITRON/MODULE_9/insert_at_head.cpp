#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node *prev;
    Node(int val){
        this -> val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    
}

void print_backward(Node* tail){
    Node* temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
    
}

void insert_at_head(Node* &head, int val){
    Node* Newnode = new Node(val);
    Newnode->next = head;
    head->prev = Newnode;
    head = Newnode;
}
void insert_at_tail(Node* &tail, int val){
    Node* Newnode = tail;
    tail->next = Newnode;
    Newnode->prev = tail;
    tail = Newnode;
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
 
    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    print_forward(head);
    insert_at_head(head, 100);
    insert_at_head(head, 200);

    
    print_forward(head);
    print_backward(tail);

    return 0;
}