// Date: 27/07/2024

#include<stdio.h>
int main(){
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        //this line run from 0 to 2
        //if 0 <--- print 1 star
        //if 1 <--- print 3 star
        //if 2 <--- print 5 star

        for (int j = 0; j < 2*i+1; j++)
        {
            printf("*"); //thos will print star 
        }
        printf("\n");
        
    }
    
    return 0;
}