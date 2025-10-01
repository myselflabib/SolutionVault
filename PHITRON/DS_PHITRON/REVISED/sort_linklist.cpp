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

void insert_at_tail(Node* &head, int val){
    Node* newnode = new Node(val);
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    
    
}

void print_link_list(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
int main(){
    Node* head = new Node(30);
    Node* a = new Node(30);
    Node* b = new Node(30);
    Node* c = new Node(30);

    head->next = a;
    a->next = b;
    b->next = c;

    insert_at_tail(head, 100);
    print_link_list(head);
    return 0;
}