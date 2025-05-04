// Date: 16/07/2024

#include<stdio.h>
int main(){
    int a = 4, b = 2, c = 6, d;
    d = a/b*c;
    printf("The value of d is %d\n", d); //the associativity always start from the left to right.

    printf("The value of e is %d\n", a*4/b*4 + c*3);
    //a*4/b*4 + c*3
    //a*4/b*4 + 18
    //16/b*4 + 18
    //8*4 + 18
    //32 + 18
    //50

    printf("The value of f is %d\n", c*8 + 12*a/4*b);
    //c*8 + 12*a/4*b.
    //48 + 12*a/4*b
    //48 + 48/4*b
    //48 + 12*b
    //48 + 24
    //72

    printf("The value of g is %d", a*4*6/c + 45*2/5);
    //a*4*6/c + 45*2/5
    //a*4*6/c + 18
    //16*6/c + 18
    //96/c + 18
    //16 + 18
    //30
    return 0;
}