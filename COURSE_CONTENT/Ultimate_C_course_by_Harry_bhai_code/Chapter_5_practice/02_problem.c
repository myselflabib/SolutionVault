// Date: 27/07/2024

#include<stdio.h>
float temp(float);
float temp(float C){
    return ((C/5)*9)+32;
}

int main(){
    float C = 45;
    printf("The temp in farenheit is %0.2f\n", temp(C));
    return 0;
}