#include<stdio.h>

int main(){
    int N, sum = 1;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        sum *= N-i;
    }
    printf("%d\n", sum);    

}