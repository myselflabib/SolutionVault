// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C

#include<stdio.h>

int main(){
    long long X, Y;
    scanf("%lld %lld", &X, &Y);

    printf("%lld + %lld = %lld\n", X, Y, X+Y);
    printf("%lld * %lld = %lld\n", X, Y, X*Y);
    printf("%lld - %lld = %lld\n", X, Y, X-Y);

}