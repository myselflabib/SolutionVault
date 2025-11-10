#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

long long lcm(long long a, long long b){

    int mx = max(a, b);
    int mn = min(a, b);

    for (int i = mx; i <= a*b; i += mx)
    {
        if(i%mn == 0){
            return i;
        }
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--) {
        long long x, y;
        cin >> x >> y;

        cout << gcd(x, y)/lcm(x, y) << " " << gcd(x, y)/lcm(x, y) << endl;
    }

    return 0;
}