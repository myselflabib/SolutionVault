#include <bits/stdc++.h>
using namespace std;

long long modPow(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

bool isPrime(int n) {
    if (n < 2) return false;
    if (n % 2 == 0) return (n == 2);
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n && n != 0) {
        if (isPrime(n)) {
            cout << n << " is normal.\n";
        } else {
            bool isCarmichael = true;
            for (int a = 2; a < n; a++) {
                if (modPow(a, n, n) != a) {
                    isCarmichael = false;
                    break;
                }
            }
            if (isCarmichael)
                cout << "The number " << n << " is a Carmichael number.\n";
            else
                cout << n << " is normal.\n";
        }
    }
    return 0;
}
