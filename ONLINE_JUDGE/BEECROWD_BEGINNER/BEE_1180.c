#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int X[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &X[i]);
    }
    int min = X[0], POS = 0;
    for (int i = 0; i < N; i++)
    {
        if (min>X[i])
        {
            min = X[i];
            POS = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", min, POS);
}