// Date: 27/07/2024

#include<stdio.h>
int main(){
    char j = 'A';
    char* i = &j;

    float x = 23.45;
    float* y = &x;

    printf("The address of the j is %p\n", &j);
    printf("The value of adress i is %c\n", *i);

    printf("The address of the j is %p\n", &x);
    printf("The value of adress i is %f\n", *y);
    return 0;
}