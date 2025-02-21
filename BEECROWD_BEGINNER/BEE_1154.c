#include<stdio.h>

int main(){
    float N, count = 0, sum = 0;
    while(1){
        scanf("%f", &N);
        if (N<0)
        {
            break;
        }  
        sum+=N;
        count++;
    }  
    printf("%.2f\n", sum/count);
}