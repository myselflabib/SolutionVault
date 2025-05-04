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



void list_check(Node* head1, Node* head2){
    int OK = 0;
    Node* temp = head2;

    for (Node* i = head1; i != NULL; i = i->next)
    {
        if (temp == NULL || i->val != temp->val)
        {
            OK = 1;
            break;
        }
        
        temp = temp->next;
    }

    if (temp != NULL) {
        OK = 1;
    }


    if(OK == 1){
        cout << "NO" <<endl;
    }
    else{
        cout << "YES" << endl;
    }


}
    

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val1, val2;

    while (true)
    {
        cin >> val1;
        if (val1 == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val1);
    }

    while (true)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val2);
    }

    list_check(head1, head2);



    return 0;
}