// Date: 27/07/2024

#include<stdio.h>
int main(){
    int j = 45;
    int* i = &j;
    int** k = &i;
    printf("The address of the j is %p\n", &j);
    printf("The value of adress i is %d\n", *i);
    printf("The value of adress i is %d\n", *(&j));
    printf("The value of adress i is %d\n", **(&i));
    return 0;
}