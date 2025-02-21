#include <stdio.h>

int main()
{
    int X, Y;
    for (int i = 0; i < 100; i++)
    {
        scanf("%d %d", &X, &Y);
        if (X>0 && Y>0)
        {
            printf("primeiro\n");
        }
        
        else if(X>0 && Y<0){
            printf("quarto\n");
        }
        else if(X<0 && Y<0){
            printf("tereiro\n");
        }
        else if(X>0 && Y<0){
            printf("quarto\n");
        }
        else if(X==0 || Y==0){
            break;
        }
    }

    return 0;
}