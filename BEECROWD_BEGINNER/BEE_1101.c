#include <stdio.h>

int main()
{
    int X, Y;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &X, &Y);
        if (X > Y)
        {
            int temp = X;
            X = Y;
            Y = temp;
        }
        int sum = 0;
        for (int j = X; j <= Y; j++)
        {
            sum += j;
            printf("%d ", j);
        }
        printf("sum=%d\n", sum);
    }

    return 0;
}