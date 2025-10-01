// Date: 20/07/2024

#include<stdio.h>
int main(){
    int i = 1;
    int sum = 0;
    while (i<=10)
    {
        sum +=i;
        i++;
    }
    printf(" The total value of the first 10 natural number is %d\n", sum);
    return 0;
}