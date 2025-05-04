// Date: 19/07/2024

#include<stdio.h>
int main(){
    int marks1, marks2, marks3;
    printf("Enter the marks1: \n");
    scanf("%d", &marks1);
    printf("Enter the marks2: \n");
    scanf("%d", &marks2);
    printf("Enter the marks3: \n");
    scanf("%d", &marks3);
    printf("The marks are %d, %d and %d\n", marks1, marks2, marks3);
    if(marks1<33 || marks2<33 || marks3<33 ){
        printf("you're failed due to shortege marks in individual subject.");
    }
    else if((marks1+marks2+marks3)/3<40){
        printf("your are failed due to short percentage.");
    }
    else{
        printf("you are paased.");
    }
    return 0;
}