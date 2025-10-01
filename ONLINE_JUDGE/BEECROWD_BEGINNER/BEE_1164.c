#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int num, sum = 0;
        scanf("%d", &num);
        for (int j = 1; j <= num/2; j++)
        {
            if (num%j==0)
            {
                sum += j;
            }
        }
        if (sum == num)
        {
            printf("%d eh perfeito\n", num);
        }
        else{
            printf("%d nao eh perfeito\n", num);
        }

    }
    
}