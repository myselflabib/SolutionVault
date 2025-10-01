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

class myStack{
    public:
        vector<int> v;

        void push(int val){
            v.push_back(val); 
        }

        void pop(){
            v.pop_back(); 
        }

        int top(){
            return v.back(); 
        }

        int size(){
            return v.size(); 
        }

        bool empty(){
            return v.empty();
        }
};

class myQueue{
    public:
    Node* head = NULL;
    Node* tail = NULL;

    int sz = 0;

    void push(int val){
        sz++;
        Node* newnode = new Node(val);
        if(head == NULL){
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    void pop(){
        sz--;
        Node* deleteNode = head;
        head = head->next;

        delete deleteNode;
        if(head == NULL){
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }

    int front(){
        return head->val;
    }

    int back(){
        return tail->val;
    }

    int size(){
        return sz;
    }
    
    bool empty(){
        return head == NULL;
    }
};

int main()
{
    int s, q;
    cin >> s >> q;

    myStack st;
    myQueue qu;

    if (s != q)
        cout << "NO" << endl;

    else
    {
        for (int i = 0; i < s; i++)
        {
            int val;
            cin >> val;

            st.push(val);
        }

        for (int i = 0; i < q; i++)
        {
            int val;
            cin >> val;

            qu.push(val);
        }

        bool flag = true;
        while (!st.empty() && !qu.empty())
        {
            if (st.top() != qu.front())
            {
                flag = false;
                break;
            }
            st.pop();
            qu.pop();
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}