#include <bits/stdc++.h>
using namespace std;

#define MAX 4
int stack_arr[MAX];
int top = -1;


int isFULL(){
    if(top == MAX-1) return 1;
    else return 0;
}

bool isEmpty(){
    if(top == -1) return 1;
    else return 0;
}

void PUSH(int data){
    if(top == MAX-1){
        cout << "Stack overflow" << endl;
        return;
    }
    top++;
    stack_arr[top] = data;
}

int POP(){
    int value;
    if(isFULL()){
        cout << "Stack underflow" << endl;
        exit(1);
    }
    value = stack_arr[top];
    top--;
    return value;
}

void print(){
    if(isEmpty()){
        cout << "Stack underflow" << endl;
        exit(1);
    }
    for (int i = top; i >=0; i--)
    {
        cout << stack_arr[i] << endl;
    }
    
}

int main()
{
    PUSH(1);
    PUSH(2);
    PUSH(3);
    PUSH(4);

    POP();
    POP();
    POP();
    // POP();
    // data = POP();


    print();
    return 0;
}