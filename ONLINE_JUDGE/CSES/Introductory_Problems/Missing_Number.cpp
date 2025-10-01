#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int N;
    cin >> N;
    long long int allSum, withoutSum = 0, Num;
    
    allSum = (long long)(N*(N+1))/2;
    for (int i = 0; i < N-1; i++) {
        cin >> Num;
        withoutSum += Num;
    }
    
    
    cout << allSum-withoutSum <<endl;
    
    return 0;
}