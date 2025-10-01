#include <stdio.h>

int main() {
    int n;
    int EVEN_count = 0;
    int ODD_count = 0;
    int POS_count = 0;
    int NEG_count = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        if (n%2==0)
        {
            EVEN_count++;
        }
        else 
        {
            ODD_count++;
        }
        if (n>0)
        {
            POS_count++;
        }
        else if (n<0)
        {
            NEG_count++;
        }
        
        
    }
    
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", EVEN_count, ODD_count, POS_count, NEG_count);
    return 0;
}