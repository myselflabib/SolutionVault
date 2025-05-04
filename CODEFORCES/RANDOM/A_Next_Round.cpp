// https://codeforces.com/problemset/problem/158/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int advancer = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] >= A[K-1]&& A[i] > 0)
        {
            advancer++;
        }
    }
    cout << advancer <<endl;
    
    return 0;
}