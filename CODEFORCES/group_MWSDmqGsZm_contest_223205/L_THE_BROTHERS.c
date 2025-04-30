// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L

#include<stdio.h>
#include<string.h>

int main(){
    char F1[1000], F2[1000], S1[1000], S2[1000];
    scanf("%s %s", F1, S1);
    scanf("%s %s", F2, S2);

    if (strcmp(S1, S2)==0)
    {
        printf("ARE Brothers\n");
    }
    else
    {
        printf("NOT\n");
    }
    
}