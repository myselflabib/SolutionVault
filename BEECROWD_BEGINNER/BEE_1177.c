#include<stdio.h>

int main(){
    int T, N[1000];
    scanf("%d", &T);
    for (int i = 0, j = 0; i < 1000; i++, j++)
    {

        if (j == T) { 
            j = 0;
        }
        printf("N[%d] = %d\n", i, j);
        
    }
    
}