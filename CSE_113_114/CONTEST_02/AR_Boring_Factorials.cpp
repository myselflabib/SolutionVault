#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

long long modPow(long long a, long long b, long long m) {
    long long res = 1;
    a %= m;
    while (b > 0) {
        if (b & 1) res = (__int128)res * a % m;
        a = (__int128)a * a % m;
        b >>= 1;
    }
    return res;
}

long long modInverse(long long a, long long p) {
    return modPow(a, p - 2, p);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long N, P;
        cin >> N >> P;

        if (N >= P) {
            cout << 0 << "\n";
            continue;
        }

        long long prod = 1;
        for (long long i = N + 1; i <= P - 1; i++) {
            prod = (__int128)prod * i % P;
        }

        long long ans = (-1 * modInverse(prod, P)) % P;
        if (ans < 0) ans += P;

        cout << ans << "\n";
    }
    return 0;
}
