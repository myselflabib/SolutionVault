#include<stdio.h>

int main(){
    int N, X, Y;
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++)
    {
        scanf("%d %d", &X, &Y);
        if (X % 2 == 0) {
            X++;
        }
        int sum = 0;
        for (int j = 0; j < Y; j++)
        {
            sum += X+2*j;
        }
        printf("%d\n", sum);
    }
   
    
}