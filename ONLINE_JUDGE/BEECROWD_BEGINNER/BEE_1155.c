#include<stdio.h>

int main(){
    float sum = 0, cal = 1;
    for (float i = 1; i <= 100; i++)
    {
        cal = 1/i;
        sum += cal;
    }
    
    printf("%.2f\n", sum);
}