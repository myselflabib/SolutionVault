// Date: 28/07/2024

#include<stdio.h>
int main(){

    //pointer arithmatic using integer pointer
    int a = 45; //1 integer = 4bit
    int* ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++;
    printf("The addres of a is %d\n", ptr);
    return 0;
}