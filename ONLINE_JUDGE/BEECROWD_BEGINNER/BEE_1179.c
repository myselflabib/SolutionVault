#include<stdio.h>

int main(){
    int N;
    float X1, X2, X3, avarage;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%f %f %f", &X1, &X2, &X3);
        avarage = ((X1*2)+(X2*3)+(X3*5))/(3+2+5);
        printf("%.1f\n", avarage);
    }
    
}