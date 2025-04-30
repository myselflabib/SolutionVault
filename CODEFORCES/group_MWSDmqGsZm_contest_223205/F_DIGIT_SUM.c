// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F

#include<stdio.h>

int main(){
    long long A, B, ALast, BLast, sum;
    scanf("%lld %lld", &A, &B);
    ALast = A%10;
    BLast = B%10;
    sum = ALast+BLast;
    printf("%lld\n", sum);
}