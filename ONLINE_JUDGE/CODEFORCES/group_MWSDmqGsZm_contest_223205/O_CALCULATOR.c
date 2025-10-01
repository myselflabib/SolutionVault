// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O

#include<stdio.h>

int main(){
    int A, B;
    char sign;
    scanf("%d %c%d", &A,&sign,&B);

    if (sign == '+')
    {
        printf("%d\n", A+B);
    }
    else if (sign == '-')
    {
        printf("%d\n", A-B);
    }
    else if (sign == '*')
    {
        printf("%d\n", A*B);
    }
    else if (sign == '/')
    {
        printf("%d\n", A/B);
    }
    
}