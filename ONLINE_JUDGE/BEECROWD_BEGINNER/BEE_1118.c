#include <stdio.h>

int main()
{
    double X;
    double sum = 0; 
    int count = 0;
    while (1)
    {
        scanf("%lf", &X);
        
        if (X < 0 || X > 10)
        {
            printf("nota invalida\n");
        }
        else
        {
            sum += X;
            count++;
        }
        if (count == 2)
        {
            printf("media = %.2lf\n", sum/2);
            count = 0;
            sum = 0;
            printf("novo calculo (1-sim 2-nao)\n");
            int N;
            while (1)
            {
                scanf("%d", &N);
                if (N == 1)
                {
                    break;
                }
                else if (N == 2)
                {
                    return 0;
                }
                else
                {
                    printf("novo calculo (1-sim 2-nao)\n");
                }
            }
        }
    }
}