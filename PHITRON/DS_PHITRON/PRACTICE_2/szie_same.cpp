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

int count_link_list(Node* head){
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}


int main(){
    Node* head1 = NULL;
    Node* tail1 = NULL;

    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val1;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val1);
    }
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val2);
    }
    int count1 = count_link_list(head1);
    int count2 = count_link_list(head2);
    if (count1 ==count2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    
    return 0;
}