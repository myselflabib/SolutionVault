#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;  

    vector<long long> a(n);    
    vector<long long> pre(n);  
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; 
    }

    pre[0] = a[0];  
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i- 1] + a[i];  
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << pre[i] << " ";
    }
    cout << endl; 

    return 0;
}