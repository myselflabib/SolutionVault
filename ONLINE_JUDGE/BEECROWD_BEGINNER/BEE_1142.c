#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N*4; i++)
    {
        if (i%4==0)
        {
            printf("PUM\n");
           continue;
           
        }
        
        printf("%d ", i);

    }
    
}