#include<stdio.h>

void printAll(int X){
    int A;
    char B;
    for (int i = 0; i < X; i++)
    {
        scanf("%d %c", &A, &B);
        for (int j = 0; j < A; j++)
        {
            printf("%c ", B);
        }
        printf("\n");
    }
    
}

int main(){
    int T;
    scanf("%d", &T);
    printAll(T);
}