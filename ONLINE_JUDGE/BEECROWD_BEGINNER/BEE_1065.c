#include <stdio.h>

int main() {
    int n, COUNT = 0;
    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &n);
        if (n%2==0)
        {
            COUNT++;
        }
    }
    
    printf("%d valores pares\n", COUNT);
    return 0;
}