#include <stdio.h>

int main() {
    float num1, num2, AVG;
    scanf("%f", &num1);
    scanf("%f", &num2);
    AVG = ((num1*3.5)+(num2*7.5))/(3.5+7.5);
    printf("MEDIA = %.5f\n", AVG);
    return 0;
}