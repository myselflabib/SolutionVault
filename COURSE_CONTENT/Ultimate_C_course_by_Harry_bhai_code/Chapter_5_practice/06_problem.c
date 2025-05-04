// Date: 27/07/2024

#include<stdio.h>
int sum_N(int);
int sum_N(int n){
    //sum(n)=1+2+3+4+5+...+(n+1)+n;
    //sum(n)= sum(n+1)+n;
    if(n==1){
        return 1;
    }
    return sum_N(n-1)+n;
}
int main(){
    // int n = 5;
    printf("The sum is %d", sum_N(9));
    return 0;
}