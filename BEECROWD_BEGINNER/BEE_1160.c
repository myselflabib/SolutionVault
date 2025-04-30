#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        double R1, R2;
        int count = 0, A, B;
        scanf("%d %d %lf %lf", &A, &B, &R1, &R2);
        while (A <= B && count <= 100)
        {
            A += (int)(A*(R1/100.0));
            B += (int)(B*(R2/100.0));
            count++;
        }
        if(count>100){
            printf("Mais de %d seculo\n", count);
        }
        else{
            printf("%d anos\n", count);
        }
    }
    
}