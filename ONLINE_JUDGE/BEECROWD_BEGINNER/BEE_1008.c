#include <stdio.h>

int main() {
    int num, hour;
    float salary;
    
    scanf("%d %d %f", &num, &hour, &salary);
    printf("NUMBER = %d\n", num);
    printf("SALARY = %.2f\n", hour*salary);
    return 0;
}