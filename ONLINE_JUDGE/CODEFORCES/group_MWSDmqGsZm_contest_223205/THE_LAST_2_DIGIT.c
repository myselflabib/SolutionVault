// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y

#include<stdio.h>

int main(){
    long long A, B, C, D, MUL, _2DIGIT;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    MUL = A*B*C*D;
    _2DIGIT = (((A%100)*(B%100)%100)*(C%100)%100)*(D%100)%100;

    printf("%02lld\n", _2DIGIT);

    return 0;
}
