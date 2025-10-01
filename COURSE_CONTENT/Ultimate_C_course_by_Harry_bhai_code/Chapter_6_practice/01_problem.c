// Date: 27/07/2024

#include<stdio.h>
int main(){
    int Variable = 34;
    int* address = &Variable;
    printf("The address of the variable is %p\n", &Variable);
    printf("The value of the variable is %d\n", *address);
    return 0;
}