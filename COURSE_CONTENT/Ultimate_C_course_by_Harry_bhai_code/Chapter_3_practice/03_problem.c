// Date: 19/07/2024

#include<stdio.h>
int main(){
    int income;
    float tax=0;
    printf("Enter income: \n");
    scanf("%f", &income);
    if(income<= 250000){                               //I cannot understand the program, beacuse of the tax system isnot capture my mind.
        printf("Tax is 0");
    }
    else if(income>250000&&income<500000){
        printf("your payable tax is %f", .05*income);
    }
    else if(income>500000&&income<1000000){
        printf("your payable tax is %f", .2*income);
    }
    else if(income>1000000){
        printf("your payable tax is %f", .3*income);
    }
    return 0;
}