#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n%2==0)
    {
        for (int i = n; i <= n+12; i++)
    {
        if (i%2!=0){
            printf("%d\n", i);
        }
        
    }
    }
    else
    {
        for (int i = n; i <= n+11; i++)
    {
        if (i%2!=0){
            printf("%d\n", i);
        }
        
    }
    }
    
    
    return 0;
}