#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;   // test case সংখ্যা

    while (t--) {
        int n;
        cin >> n;   // array এর সাইজ

        int a[n + 1];   // এখন array বানালাম index = 1 থেকে
        for (int i = 1; i <= n; i++) {
            cin >> a[i];   // element গুলো ইনপুট নিলাম
        }

        bool ok = true;

        // odd index গুলোর parity চেক
        int odd_parity = a[1] % 2;   // index 1 এর parity
        for (int i = 1; i <= n; i += 2) {
            if (a[i] % 2 != odd_parity) {
                ok = false;
                break;
            }
        }

        // even index গুলোর parity চেক
        if (n > 1) {   // যদি কমপক্ষে একটা even index থাকে
            int even_parity = a[2] % 2;   // index 2 এর parity
            for (int i = 2; i <= n; i += 2) {
                if (a[i] % 2 != even_parity) {
                    ok = false;
                    break;
                }
            }
        }

        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
