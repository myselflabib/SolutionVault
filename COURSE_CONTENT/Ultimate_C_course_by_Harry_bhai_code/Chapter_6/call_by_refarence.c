// Date: 27/07/2024

#include<stdio.h>

int sum(int*, int*);
int sum(int* a, int* b){
    *a = 6;
    return *a+*b;
}

int main(){
    int x= 1, y = 6;
    printf("the value of 1 and 6 is %d\n", sum(&x, &y));
    printf("the value of x is %d\n", x);
    return 0;
}