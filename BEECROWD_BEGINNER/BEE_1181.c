#include<stdio.h>

int main()
{
	int L;
    char T;
    scanf("%d %c", &L, &T);
    double arr[12][12], sum=0.0;
    for(int i = 0; i<12; i++){
        for(int j = 0; j<12; j++){
            scanf("%lf", &arr[i][j]);
        }
    }
    for(int i = 0; i<12; i++){
        for(int j = 0; j<12; j++){
    	sum+=arr[L][j];
        }
    }
    if(T=='S'){
    	printf("%.1lf\n", sum);
    }
    else if (T=='M'){
        printf("%.1lf\n", sum/12);
    }
    return 0;
}