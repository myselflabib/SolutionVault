#include<stdio.h>

void reverse(int n){
    printf("%d ", n);
    if (n==1)
    {
        return;
    }
    reverse(n-1);
    
    
}
int main(){
    int n;
    scanf("%d", &n);
    reverse(n);
}