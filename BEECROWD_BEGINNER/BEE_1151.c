#include<stdio.h>

int main(){
    int N, num1=0, num2=1;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        if(i>2)
        {
        int sum= num1+num2;
        num1 = num2;
        num2 = sum;
        printf("%d ", sum);
        }
        else if (i == 1)
        {
            printf("%d ", num1);
        }
        else if (i == 2)
        {
            printf("%d ", num2);
        }
        
    }
    

}