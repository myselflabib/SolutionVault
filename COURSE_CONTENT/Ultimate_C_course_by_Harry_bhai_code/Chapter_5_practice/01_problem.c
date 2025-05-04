// Date: 27/07/2024

#include<stdio.h>
float avarage(int, int, int);
float avarage(int a, int b, int c){
    return (a+b+c)/3.0;
}
int main(){
    int a = 3, b = 4, c =6;
    printf("The avarage of the Three number is %0.2f\n", avarage(a, b, c));
    printf("This sum is genrated using functoin");
    return 0;
}