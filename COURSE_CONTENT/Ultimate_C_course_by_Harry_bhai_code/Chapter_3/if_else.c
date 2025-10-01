// Date: 18/07/2024
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    if(age>15){
        printf("your age is grater than 15\n");
    }
    else{
        printf("your age is less than 15\n");
    }
    return 0;
}