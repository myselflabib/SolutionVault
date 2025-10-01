#include<stdio.h>

int main(){
    double X, N[100];
    scanf("%lf", &X);
    double half=X;
    for (int i = 0; i < 100; i++)
    {
        
        printf("N[%d] = %.4lf\n", i, X);
        X=  X/2;
    }
}
