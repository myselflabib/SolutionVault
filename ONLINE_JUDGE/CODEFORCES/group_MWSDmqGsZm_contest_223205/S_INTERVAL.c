#include<stdio.h>

int main(){
    float X;
    scanf("%f", &X);
    if (X>=0 && X<=25)
    {
        printf("Interval [0,25]\n");
    }
    else if (X>=25.00001 && X<=50.0000000)
    {
        printf("Interval (25,50]\n");
    }
    else if (X>=50.0000001 && X<=75.000000000)
    {
        printf("Interval (50,75]\n");
    }
    else if (X>=75.000000001 && X<=100.00000000000)
    {
        printf("Interval (75,100]\n");
    }
    else{
        printf("Out of Intervals\n");
    }

}