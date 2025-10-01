// Date: 19/07/2024

#include<stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d", &a);

    switch(a){
        case 1: 
            printf("You enter 1\n");
            break;
        case 2: 
            printf("you enter 2\n");
            break;
        case 3: 
            printf("you enter 3\n");
            break;
        case 4: 
            printf("you enter 4\n");
            break;
        default:
            printf("nothing match");

    }
    return 0;
}