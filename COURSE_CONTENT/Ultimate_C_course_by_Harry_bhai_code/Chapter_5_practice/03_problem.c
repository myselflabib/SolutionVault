// Date: 27/07/2024

#include<stdio.h>

float force(float);
float force(float m){
    return m*9.8;
}
int main(){
    float m = 50;
    printf("The given force is %0.2f\n", force(m));
    return 0;
}