#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;   

    while (t--) {
        int n;
        cin >> n;   

        int a[n + 1];   
        for (int i = 1; i <= n; i++) {
            cin >> a[i];   
        }

        bool ok = true;

        
        int odd_parity = a[1] % 2;   
        for (int i = 1; i <= n; i += 2) {
            if (a[i] % 2 != odd_parity) {
                ok = false;
                break;
            }
        }

        
        if (n > 1) {   
            int even_parity = a[2] % 2;   
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
