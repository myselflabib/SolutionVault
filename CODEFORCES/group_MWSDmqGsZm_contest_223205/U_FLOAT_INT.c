// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
#include<stdio.h>

int main(){
    float N, DEC;
    scanf("%f", &N);

    if (N == (int)N)
    {
        printf("int %d\n", (int)N);
    }
    else{
        DEC= N - (int)N;
        printf("float %d %.3f\n", (int)N, DEC);
    }
    
}