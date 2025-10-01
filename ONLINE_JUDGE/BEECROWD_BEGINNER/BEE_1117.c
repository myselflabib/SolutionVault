#include <stdio.h>

int main()
{
    float num, sum = 0;
    int count = 0;
    while (count < 2)
    {
        scanf("%f", &num);
        if (num < 0 || num > 10)
        {
            printf("nota invalida\n");
        }
        else
        {
            sum += num;
            count++;
        }
    }

    printf("media = %.2f\n", sum / 2);
    return 0;
}