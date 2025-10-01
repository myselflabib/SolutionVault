#include <stdio.h>

int main() {
    double NUM1, NUM2;
    scanf("%lf %lf", &NUM1, &NUM2);
    if (NUM1>0 && NUM2>0){
        printf("Q1\n");
    }
    else if (NUM1<0 && NUM2>0){
        printf("Q2\n");
    }
    else if (NUM1<0 && NUM2<0){
        printf("Q3\n");
    }
    else if (NUM1>0 && NUM2<0){
        printf("Q4\n");
    }
    else if (NUM1==0 && NUM2==0){
        printf("Origem\n");
    }
    else if (NUM1==0){
        printf("Eixo Y\n");
    }
    else if (NUM2==0){
        printf("Eixo X\n");
    }
    return 0;
}