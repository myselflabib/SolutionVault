#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, a, b;
    cin >> n >> x >> a >> b;

    cout<< ((n-x)*a)+(x*b) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cout.tie(0);

    int t;
    cin >> t;  
    while(t--){ 
        solve();
    }
    return 0;
}