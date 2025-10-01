#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *n = (int *)malloc(100 * sizeof(int));

    printf("%d", *n);
    n++;
    printf("%d", *n);
    n++;
    printf("%d", *n);
}