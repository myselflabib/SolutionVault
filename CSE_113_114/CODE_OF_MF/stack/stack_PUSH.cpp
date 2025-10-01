#include <bits/stdc++.h>
using namespace std;

#define MAX 4
int stack_arr[MAX];
int top = -1;

void PUSH(int data){
    if(top == MAX-1){
        cout << "Stack overflow" << endl;
        return;
    }
    top++;
    stack_arr[top] = data;
}

int main()
{
    PUSH(1);
    PUSH(2);
    PUSH(3);
    PUSH(4);
    PUSH(5);

    cout << top << endl;
    return 0;
}