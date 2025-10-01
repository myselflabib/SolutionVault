// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E

#include<stdio.h>
int main(){
    double R, AREA;
    const double pi = 3.141592653;
    scanf("%lf", &R);
    AREA = pi*R*R;
    printf("%.9lf\n", AREA);
}