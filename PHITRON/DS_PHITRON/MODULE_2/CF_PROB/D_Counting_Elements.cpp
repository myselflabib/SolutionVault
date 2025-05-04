// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D


#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if(find(a.begin(), a.end(), a[i]+1)!= a.end()){
            count++;
        }
    }
    cout << count <<endl;
    
    
    return 0;
}