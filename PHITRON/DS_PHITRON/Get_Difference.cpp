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


Node* find_max(Node* head){
    Node* max = head;
    for (Node* i = head; i != NULL; i= i->next)
    {
        if(i->val > max->val){
            max = i;
        }
    }
    return max;
}




Node* find_min(Node* head){
    Node* min = head;
    for (Node* i = head; i != NULL; i= i->next)
    {
        if(i->val < min->val){
            min = i;
        }
    }
    return min;
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
    
    Node* max = find_max(head);
    Node* min = find_min(head);


    cout << max->val- min->val << endl;
    
    return 0;
}