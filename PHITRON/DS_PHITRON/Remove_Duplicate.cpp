#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};


void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}


void remove_duplicates(Node* head) {
    Node* current = head;
    while (current != NULL){
        Node* prev = current;
        Node* temp = current->next;
        while (temp != NULL) {
            if(temp->val == current->val){
                prev->next = temp->next;
                delete temp;
                temp = prev->next;
            } 
            
            else{
                prev = temp;
                temp = temp->next;
            }
        }
        current = current->next;
    }
}

void print_linked_list(Node* head){
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (cin >> val && val != -1) {
        insert_at_tail(head, tail, val);
    }

    remove_duplicates(head);
    print_linked_list(head);

    return 0;
}
