#include<stdio.h>

int main(){
    int N, amount;
    scanf("%d", &N);
    char NAME;
    int X, cobais = 0, coelos = 0, ratos = 0, sapos = 0;
    float PAR_coelhos, PAR_ratos, PAR_sapos;
    for (int i = 0; i < N; i++)
    {
        scanf("%d %c", &X, &NAME);
        if (NAME=='C')
        {
            coelos+=X;
        }
        if (NAME=='R')
        {
            ratos+=X;
        }
        if (NAME=='S')
        {
            sapos+=X;
        }
    }
    cobais = sapos+ratos+coelos;
    PAR_coelhos = (coelos*100.00)/cobais;
    PAR_ratos = (ratos*100.00)/cobais;
    PAR_sapos = (sapos*100.00)/cobais;
    printf("Total: %d cobaias\n", cobais);
    printf("Total de coelhos: %d\n", coelos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2f %\n", PAR_coelhos);
    printf("Percentual de ratos: %.2f %\n", PAR_ratos);
    printf("Percentual de sapos: %.2f %\n", PAR_sapos);
    
}