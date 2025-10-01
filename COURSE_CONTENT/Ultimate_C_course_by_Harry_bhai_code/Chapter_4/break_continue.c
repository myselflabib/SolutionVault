// Date: 20/07/2024

#include<stdio.h>
int main(){
    for (int i = 0; i < 10; i++)
    {
        if(i == 5){
            // break; //exit the loop now
            continue; // skip the iteration now.
        }
        printf("%d\n", i);
    }
    
    return 0;
}