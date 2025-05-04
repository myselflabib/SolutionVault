// Date: 27/07/2024

#include<stdio.h>

int factorial(int);
int factorial(int n){
    // int f;
    if (n == 1 || n ==0)
    {
        return 1;
    }
    else{
       return n * factorial(n-1);
    }
    
}
int main(){
    int a = 3;
    printf("The factoria; of %d is %d\n", a, factorial(a));
    return 0;
}