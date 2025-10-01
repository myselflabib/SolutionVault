// Date: 19/07/2024

#include<stdio.h>
int main(){
    int marks;
    printf("enter your marks:");
    scanf("%d", &marks);
    if(marks<=100&&marks>=80){
        printf("your grade is A+");
    }
    else if(marks<=79&&marks>=70){
        printf("your grade is A");
    }
    else if(marks<=69&&marks>=60){
        printf("your grade is A-");
    }
    else if(marks<=59&&marks>=50){
        printf("your grade is B");
    }
    else if(marks<=49&&marks>=40){
        printf("your grade is C");
    }
    else if(marks<=39&&marks>=33){
        printf("your grade is D");
    }
    else{
        printf("your grade is F");
    }

//     if(marks<=79&&marks>=70){
//        grade = 'A';
//     }
//     else if(marks<=69&&marks>=60){
//         grade = 'B';
//     }
//     else if(marks<=59&&marks>=50){
//         grade = 'C';
//     }
//     else if(marks<=49&&marks>=40){
//         grade = 'D';
//     }
//     else if(marks<=39&&marks>=33){
//         grade = 'E';
//     }
//     else{
//         grade = 'F';
//     }
    return 0;
}