#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    for (int i = 0; i < 5; ++i)
    {
        if (a <= b && a <= c)
            a++;
        else if (b <= a && b <= c)
            b++;
        else
            c++;
    }

    printf("%d\n", a * b * c); 
    return 0;
}
