// Date: 27/07/2024

#include<stdio.h>
int returning_5 (int*);
int returning_5 (int* a){
   printf("The value of the a is %d\n", a);
    printf("The value of the *a is %d\n", *a);
    return 5;
}
int main(){
    int i = 34;
    int* a = &i;
    printf("The address of the variable is %u\n", &i);
    // printf("The value of the variable is %d\n", *address);
    returning_5(a);
    return 0;
}