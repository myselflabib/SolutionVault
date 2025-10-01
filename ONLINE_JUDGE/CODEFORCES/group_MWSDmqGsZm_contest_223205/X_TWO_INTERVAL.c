#include<stdio.h>

int main(){
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    int start = (A>C) ? A:C;
    int end = (B<D) ? B : D;

    if (start <= end)
    {
        printf("%d %d\n", start, end);
    }
    else{
        printf("-1\n");
    }

}