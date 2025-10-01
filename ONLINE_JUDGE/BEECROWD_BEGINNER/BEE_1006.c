#include <stdio.h>

int main() {
    float num1, num2, num3, AVG;
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    AVG = ((num1*2)+(num2*3)+(num3*5))/(2+3+5);
    printf("MEDIA = %.1f\n", AVG);
    return 0;
}