#include<stdio.h>
#include<string.h>

int palindromeCheck(int X){
    int BI[32], i = 0;

    while (X)       
    {
        BI[i] = X%2;
        X/=2;
        i++;
    }
    for (int j = 0; j < i/2; j++)
    {
        if (BI[j] != BI[i-j-1])
        {
            return 0;
        }
        return 1;
    }
    

}

void wonderCheck(int Y){
    if (Y%2!=0)
    {
        if (palindromeCheck(Y) == 1)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    else{
        printf("NO\n");
    }
}

int main(){
    int A;
    scanf("%d", &A);
    wonderCheck(A);
}