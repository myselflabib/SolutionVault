#include <stdio.h>
#include <math.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        if (N%2==0)
        {
            printf("%d^2 = %d\n", i, (int)pow(i, 2));
        }
        
    }
    
    return 0;
}