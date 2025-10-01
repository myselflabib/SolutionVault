#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string val;
    Node* next;
    Node* prev;
    Node(string v) {
        val = v;
        next = NULL;
        prev = NULL;
    }
};

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    string s;

    while (1) {
        cin >> s;
        if (s == "end") break;

        Node* n = new Node(s);
        if (head == NULL) {
            head = n;
            tail = n;
        } 
    else {
            tail->next = n;
            n->prev = tail;
            tail = n;
        }
    }

    int Q;
    cin >> Q;
    cin.ignore();

    Node* current = head;
    for (int i = 0; i < Q; i++) {
        string line;
        getline(cin, line);
        stringstream ss(line);

        string command;
        ss >> command;

        if (command == "visit") {
            string address;
            ss >> address;

            Node* temp = head;
            bool found = false;
            while (temp != NULL){
                if (temp->val == address) {
                    current = temp;
                    cout << current->val << endl;
                    found = true;
                    break;
                }
                temp = temp->next;
            }
            if (!found) cout << "Not Available" << endl;
        }
        else if (command == "next") {
            if (current->next != NULL) {
                current = current->next;
                cout << current->val << endl;
            } 
            
            else {
                cout << "Not Available" << endl;
            }
        }
        else if(command == "prev"){
            if (current->prev != NULL) {
                current = current->prev;
                cout << current->val << endl;
            } 
            
            else{
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
