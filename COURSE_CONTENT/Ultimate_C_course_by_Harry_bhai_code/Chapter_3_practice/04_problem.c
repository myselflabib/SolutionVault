// Date: 19/07/2024

#include<stdio.h>
int main(){
    int year;
    printf("Enter your year:\n");
    scanf("%d", &year);
    printf("your assign year is %d\n", year);
    if(year%4==0 && year%100!=0 || year%400==0){
        printf("This is leap year.");
    }
    else{
        printf("this is not leap year.");
    }
    return 0;
}