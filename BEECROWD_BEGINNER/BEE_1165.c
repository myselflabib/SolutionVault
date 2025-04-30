#include<stdio.h>
int main(){
    int N, X;
    scanf("%d", &N);
    for(int i = 1; i<= N; i++) {
        scanf("%d", &X);
        int count = 0;
        if (X==0 || X==1)
        {
            count = 1;
        }
        
        for (int i = 2; i <= X/2; i++)
        {
            if (X%i==0)
            {
                count++;
                break;
            }
        }
        if (count == 1)
        {
            printf("%d nao eh primo\n", X);
        }  
        else{
            printf("%d eh primo\n", X);
        }
    }
}