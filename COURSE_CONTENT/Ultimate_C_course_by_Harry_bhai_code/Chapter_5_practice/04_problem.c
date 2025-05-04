// Date: 27/07/2024

#include<stdio.h>
//0,1, 1, 2, 3, 5, 8, 13, 21....
// fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
int fibo(int);
int fibo(int n){
    if(n == 1 || n == 2){
        return n-1;
    }
        return fibo(n-1) + fibo(n-2);
}

int main(){
    int n = 2;
    printf("The fibonacci at %d is %d\n",n,fibo(n));
    return 0;
}