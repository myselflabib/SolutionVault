#include<stdio.h>

int main(){
    int V, N[10];
    scanf("%d", &V);
    int incr = 1;
    for (int i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, V);
        V*=2;
    }
}