#include<stdio.h>

int factorial(int x){

    int nfact = 1;
    for (int i = 2; i <= x; i++)
    {
        nfact *= i;
    }
    return nfact;
}

int permutation(int n, int r){
    int ncr = factorial(n)/factorial(n-r);
    return ncr;
}

int main(){
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d\n", permutation(n, r));
}