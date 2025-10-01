#include<stdio.h>

int main(){
    float A[20];
    for (int i = 0; i < 4; i++)
    {
        scanf("%f", &A[i]);
    }
    for (int i = 3, j = 0; i>=0; i--, j++)
    {
       
            printf("N[%d] = %.1f\n", j, A[i]);
    }
}