#include<stdio.h>

int main(){
    
    for (int i = 1; i <= 9; i++)
    {
        for (int j = i+6; j >= i+4; j--)
        {
            if (i%2!=0)
            {
                printf("I=%d J=%d\n", i, j);
                
            }   
            
        }
        
    }
    
}