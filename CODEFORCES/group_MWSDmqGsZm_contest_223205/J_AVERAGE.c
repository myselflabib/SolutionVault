#include<stdio.h>

void averageN(int X){
    double Y[X], sum=0.0;
    for (int i = 0; i < X; i++)
    {
        scanf("%lf", &Y[i]);
        sum += Y[i];
    }
    printf("%.7lf\n", sum/(double)X);
}

int main(){
    int N;
    scanf("%d", &N);
    averageN(N);
}