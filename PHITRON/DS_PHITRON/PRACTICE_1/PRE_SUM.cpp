#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> s (n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    vector <int> pre[n];
    pre[1] = s[1];
    for (int i = 0; i < n; i++)
    {
        pre[i] = pre[i-1] + s[i];
    }
    
    
    return 0;
}