#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}


void insert_at_any_pos(Node *head, int indx, int val)
{
    Node *Newnode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < indx-1; i++)
    {
        temp = temp->next;
    }

    Newnode->next = temp->next;
    temp->next->prev = Newnode;
    temp->next = Newnode;
    Newnode->prev = temp;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insert_at_any_pos(head, 2, 100);

    print_forward(head);

    return 0;
}