#include<stdio.h>

int main(){
    float sum = 0, cal = 1, even, odd;
    for (float i = 1, j = 1; i <= 39; i+=2, j*=2)
    {
        
            even = j;
            odd = i;
        cal = odd/even;
        sum += cal;
    }
    
    printf("%.2f\n", sum);
}