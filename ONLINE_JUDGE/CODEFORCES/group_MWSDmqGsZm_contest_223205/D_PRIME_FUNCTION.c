#include <stdio.h>
#include<math.h>

void checkPrime(int Y)
{
    int A;
    for (int i = 0; i < Y; i++)
    {
        scanf("%d", &A);
        int prime = 0;
        if (A == 0 || A == 1)
        {
            prime = 1;
        }
        for (int j = 2; j <= sqrt(A); ++j)
        {
            if (A % j == 0)
            {
                prime = 1;
                break;
            }
        }
        if (prime == 1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}
int main()
{
    int X;
    scanf("%d", &X);
    checkPrime(X);
}