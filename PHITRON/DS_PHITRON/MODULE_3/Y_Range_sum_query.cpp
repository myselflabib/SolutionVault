// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, Q;
    cin >> N >> Q;
    vector <long long int> A(N+1);
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }
    vector <long long int> pr(N+1);
    pr[1] = A[1];
    for (int i = 1; i <= N; i++)
    {
        pr[i] = pr[i-1] + A[i];
    }

    while (Q--)
    {
        int l, r;
        cin >> l >> r;
        long long int sum = 0;
        if(l == 1){
            sum = pr[r];
            cout << sum << endl;
        }
        else{
            sum = pr[r] - pr[l-1];
            cout << sum << endl;
        }
    }

    return 0;
}