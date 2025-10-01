#include <bits/stdc++.h>
using namespace std;

#define MAX 1000
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

int PEEK(){
    if(isEmpty()){
        cout << "Stack overflow" << endl;
        exit(1);
    }

    return stack_arr[top];

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
    int choice, data;
    while(1){
        cout << "\n|-----------------------------------------|\n";
        cout << "| 1. PUSH                                 |\n";                              
        cout << "| 2. POP                                  |\n";                              
        cout << "| 3. Print the top element                |\n";
        cout << "| 4. Print all element of the stack.      |\n";
        cout << "| 5. Quit                                 |\n";
        cout << "|-----------------------------------------|\n";

        cout << "Please enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter the element to be pushed: ";
            cin >> data;
            PUSH(data);
            break;
        
        case 2: 
            data = POP();
            cout << "\nThe deleted element is: " << data << endl;
            break;

        case 3:
            data = PEEK();
            cout << "\nThe top element is: " << data << endl;
            break;

        case 4:
            cout << endl;
            print();
            break;
        
        case 5:
        exit(1);

        default:
            cout << "wrong Choice" << endl;
            break;
        }

    }


    print();
    return 0;
}