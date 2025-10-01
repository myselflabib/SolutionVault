#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node *prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_link_list(Node* head) {
    Node* temp = head;
    cout << "L -> ";
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_reverse_link_list(Node* tail) {
    Node* temp = tail;
    cout << "R -> ";
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_head(Node* &head, Node* &tail, int val) {
    Node* n = new Node(val);
    if (head == NULL) {
        head = tail = n;
        return;
    }
    n->next = head;
    head->prev = n;
    head = n;
}

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* n = new Node(val);
    if (tail == NULL) {
        head = tail = n;
        return;
    }
    tail->next = n;
    n->prev = tail;
    tail = n;
}

void insert_at_idx(Node* &head, Node* &tail, int idx, int val){
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    if (idx < 0 || idx > count) {
        cout << "Invalid" << endl;
        return;
    }

    if (idx == 0) {
        insert_at_head(head, tail, val);
    } 
    else if(idx == count) {
        insert_at_tail(head, tail, val);
    } 
    else{
        Node* n = new Node(val);
        temp = head;
        for (int i = 0; i < idx - 1; i++) {
            temp = temp->next;
        }

        n->next = temp->next;
        n->prev = temp;
        temp->next->prev = n;
        temp->next = n;
    }

    print_link_list(head);
    print_reverse_link_list(tail);
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;
        insert_at_idx(head, tail, X, V);
    }

    return 0;
}
