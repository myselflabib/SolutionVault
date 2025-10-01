#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    while (cin >> n) {
        if (n == 0) break;          
        int r = n % 9;              
        if (r == 0) cout << 9 << '\n';
        else cout << r << '\n';
    }
    return 0;
}
