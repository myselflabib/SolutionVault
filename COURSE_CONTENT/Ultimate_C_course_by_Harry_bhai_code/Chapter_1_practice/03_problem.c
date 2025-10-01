//problem- change the value from celcious to farenheit.
//Date: 15/07/2024

#include<stdio.h>
int main(){
    float C, F;
    printf("Enter the tempareture in celcious:");
    scanf("%f", &C);
    F = (9.0/5.0)*C + 32;
    printf("The tempareture in celcious is %f Degree.\nThe tempareture infarenhiet is- %f", C, F);
    return 0;
}