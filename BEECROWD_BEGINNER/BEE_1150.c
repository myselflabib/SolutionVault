#include<stdio.h>

int main(){
    int X, Z, count=0, sum=0;
    scanf("%d", &X);
    while(1){
        scanf("%d", &Z);
        if (Z>X)
        {
            break;
        }
    }
    while(1){
        sum+=X;
        X++;
        count++;
        if (sum>Z)
        {
            break;
        }
        
    }
    printf("%d\n", count);
}