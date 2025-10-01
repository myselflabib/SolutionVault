// Date: 27/07/2024

#include<stdio.h>

void swap(int*, int*);
void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


int main(){
    int x= 1, y = 6;
    swap(&x, &y);
    printf("the value of x is %d and y is %d\n", x, y);
    return 0;
}