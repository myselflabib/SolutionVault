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

void insert_at_head(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    if (tail == NULL) {
        tail = head; 

    }
}

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } 
    
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

void delete_at_index(Node* &head, Node* &tail, int index) {
    if (head == NULL) {
        return;
    }

    if (index == 0) {
        Node* deleteNode = head;
        head = head->next;
        if (head == NULL) tail = NULL;
        delete deleteNode;
        return;
    }

    Node* temp = head;
    for (int i = 0; i < index - 1; i++) {
        if (temp == NULL || temp->next == NULL) return; 
        temp = temp->next;
    }

    if (temp->next == NULL) {
        return;
    }

    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;

    if (deleteNode == tail) {
        tail = temp;
    }

    delete deleteNode;
}

void print_linked_list(Node* head) {
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

    int Q;
    cin >> Q;

    while (Q--) {
        int X, V;
        cin >> X >> V;

        if (X == 0) {
            insert_at_head(head, tail, V);
        } else if (X == 1) {
            insert_at_tail(head, tail, V);
        } else if (X == 2) {
            delete_at_index(head, tail, V);
        }

        print_linked_list(head);
    }

    return 0;
}
