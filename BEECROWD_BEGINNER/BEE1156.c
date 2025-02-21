#include<stdio.h>

int main(){
    float sum = 0, cal = 1, even, odd;
    for (float i = 1; i <= 40; i++)
    {
        if (i/2==0)
        {
            even = i;
        }
        else{
            odd = i;
        }
        
        cal = odd/even;
        sum += cal;
    }
    
    printf("%.2f\n", sum);
}