#include<stdio.h>

int main(){
    
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 7; j >= 5; j--)
        {
            if (i%2!=0)
            {
                printf("I=%d J=%d\n", i, j);
            }   
            
        }
        
    }
    
}