// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D

#include<stdio.h>

int main(){
    long long A, B, C, D, X;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    X = (A*B)- (C*D);

    printf("Difference = %lld\n", X);

}