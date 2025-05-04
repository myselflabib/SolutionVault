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

void number_check(Node* head, int X){
    int index = 0, avail = 0;

    for (Node* i = head; i != NULL; i = i->next)
    {
        index++;

        if (i->val == X)
        {
            avail = 1;
            break;
        }
    }
    if (avail ==1)
    {
        cout << index-1 <<endl;
    }
    else{
        cout << "-1" << endl;
    }
    
    
}
int main()
{
    

    int val, N;
    cin >> N;
    
    while (N--)
    {

        Node *head = NULL;
        Node *tail = NULL;
        while (true)
        {
            cin >> val;
            if (val == -1)
            {
                break;
            }
            insert_at_tail(head, tail, val);
        }
        int X;
        cin >> X;

        number_check(head, X);
    }

    return 0;
}