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
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

        void push(int val){ //o(1)
            sz++;
            Node* newNode = new Node(val);
            if(head==NULL){
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }

        void pop(){ //o(1)
            sz++;
            Node* deleteNode = tail;

            tail = tail->prev;
            delete deleteNode;
            tail->next = NULL;
            if(tail == NULL){
                head = NULL;
                return;
            }

            tail->next = NULL;
        }

        int top(){
            return tail->val; //o(1)
        }

        int size(){
            return sz; //o(1)
        }

        bool empty(){ //o(1)
            if(head == NULL) return true;
            else return false;
        }
};

int main()
{
    myStack st;
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.push(x);
    }

    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
    
    

    return 0;
}