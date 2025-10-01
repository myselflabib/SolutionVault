#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int x[N], sumIN = 0, sumOUT = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &x[i]);
        if (10<=x[i] && x[i]<=20)
        {
            sumIN++;
        }
        else{
            sumOUT++;
        }
        
    }
    printf("%d in\n%d out\n", sumIN, sumOUT);
    return 0;
}