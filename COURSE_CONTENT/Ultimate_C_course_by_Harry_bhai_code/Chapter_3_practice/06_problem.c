// Date: 19/07/2024

#include<stdio.h>
int main(){
    int num1, num2, num3, num4;
    printf("Enter number1:\n");
    scanf("%d", &num1);
    printf("Enter number2:\n");
    scanf("%d", &num2);
    printf("Enter number3:\n");
    scanf("%d", &num3);
    printf("Enter number4:\n");
    scanf("%d", &num4);
    printf("you enter %d, %d, %d and %d\n", num1,num2,num3,num4); 
    if(num1>num2 && num1>num3 && num1>num4){
        printf("The greatest of all is %d.\n",num1);
    } 
    else if(num2>num1 && num2>num3 && num2>num4){
        printf("The greatest of all is %d.\n",num2);
    }
    else if(num3>num1 && num3>num2 && num3>num4){
        printf("The greatest of all is %d.\n",num3);
    }
    else if(num4>num1 && num4>num2 && num4>num3){
        printf("The greatest of all is %d.\n",num4);
    }
    return 0;
}