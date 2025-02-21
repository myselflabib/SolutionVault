#include <stdio.h>

int main()
{
    int X, Y;
    for (int i = 0; i < 100; i++)
    {
        scanf("%d %d", &X, &Y);
        if (X > Y)
        {
            printf("Decrescente\n");
        }
        
        else if(X<Y){
            printf("Crescente\n");
        }
        else{
            break;
        }
    }

    return 0;
}