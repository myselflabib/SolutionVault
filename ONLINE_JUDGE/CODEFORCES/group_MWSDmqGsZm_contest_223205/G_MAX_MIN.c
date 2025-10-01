#include<stdio.h>

void MAX_MIN(int X){
    int NUM[X];
    for (int i = 0; i < X; i++)
    {
        scanf("%d", &NUM[i]);
    }
    int MAX = NUM[0], MIN = NUM[0];

    for (int i = 0; i < X; i++)
    {
        if (MAX < NUM[i])
        {
            MAX = NUM[i];
        }
        if (MIN> NUM[i])
        {
            MIN=NUM[i];
        }
    }
    printf("%d %d\n", MIN, MAX);
}
int main(){
    int A;
    scanf("%d", &A);
    MAX_MIN(A);
}