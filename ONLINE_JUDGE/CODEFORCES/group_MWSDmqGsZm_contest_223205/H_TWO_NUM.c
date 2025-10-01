#include<stdio.h>
#include<math.h>

int main(){
    double A, B;
    scanf("%lf %lf", &A, &B);
    int C = floor(A/B);
    int D = ceil(A/B);
    int E = round(A/B);
    printf("floor %d / %d = %d\n", (int)A, (int)B, C);
    printf("ceil %d / %d = %d\n", (int)A, (int)B, D);
    printf("round %d / %d = %d\n", (int)A, (int)B, E);

}