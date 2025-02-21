#include <stdio.h>

int main()
{
    int X;
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &X);
        if (X==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        
        else{
            printf("Senha Invalida\n");
        }
    }

    return 0;
}