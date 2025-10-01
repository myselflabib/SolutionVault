// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    
    reverse(A.begin(), A.end());

    for (int i = 0; i < N; i++)
        cout << A[i] << " ";
    return 0;
}