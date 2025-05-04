// Date: 20/07/2024

#include<stdio.h>
int main(){
    int i;
    int sum = 0;
    //using do while loop:
    // do{
    //     sum +=i;
    //     i++;
    // }while (i<=10);

    //using for loop:
    for ( i = 1; i <=10; i++)
    {
        sum +=i;
    }
    printf(" The total value of the first 10 natural number is %d.\n", sum);
    
    return 0;
}