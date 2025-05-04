// Date: 20/07/2024

#include<stdio.h>
int main(){
    //i++ prints i first then increments the value.
    //++i increments the value first then prints i.

    int i = 5;
    printf("The value of i is %d\n",i); //5
    i = i + 5;
    printf("The value of i is %d\n", i);//10

    printf("The value of i is %d\n", ++i); //11

    printf("The value of i is %d\n", i++); //11
    printf("The value of i is %d\n", i);  //12
    

    i +=3;
    printf("The value of i is %d\n", i); //15

    
    return 0;
}