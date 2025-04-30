#include<stdio.h>

int main(){
    int X, FIRST_DIGIT;
    scanf("%d", &X);

    FIRST_DIGIT = X/1000;
    if (FIRST_DIGIT %2 ==0)
    {
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
    
}