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
    } 
    else {
        n->next = head;
        head->prev = n;
        head = n;
    }
    print_link_list(head);
    print_reverse_link_list(tail);
}

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* n = new Node(val);
    if (tail == NULL) {
        head = tail = n;
    } 
    
    else {
        tail->next = n;
        n->prev = tail;
        tail = n;
    }
    print_link_list(head);
    print_reverse_link_list(tail);
}

void delete_at_idx(Node* &head, Node* &tail, int idx){
    if (head == NULL) {
        print_link_list(head);
        print_reverse_link_list(tail);
        return;
    }

    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    if (idx < 0 || idx >= count) {
        print_link_list(head);
        print_reverse_link_list(tail);
        return;
    }

    temp = head;
    if (idx == 0) {
        Node* del = head;
        head = head->next;
        if (head != NULL) head->prev = NULL;
        else tail = NULL;
        delete del;
    } else if (idx == count - 1) {
        Node* del = tail;
        tail = tail->prev;
        if (tail != NULL) tail->next = NULL;
        else head = NULL;
        delete del;
    } else {
        for (int i = 0; i < idx; i++) temp = temp->next;
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }
    print_link_list(head);
    print_reverse_link_list(tail);
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int q;
    cin >> q;

    for (int i = 0; i < q; i++){
        int x, v;
        cin >> x >> v;
        if (x == 0){
            insert_at_head(head, tail, v);
        }
        else if (x == 1){
            insert_at_tail(head, tail, v);
        }
        else if (x == 2){
            delete_at_idx(head, tail, v);
        }
    }

    return 0;
}
