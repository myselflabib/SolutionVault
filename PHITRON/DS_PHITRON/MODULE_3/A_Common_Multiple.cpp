#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
        }

        int max_beautiful = 0;
        for (int s = 2; s <= 2 * n; s++) {
            int cnt = 0;
            for (int x = 1; x < s; x++) {
                int y = s - x;
                if (x <= n && y <= n) {
                    cnt += min(freq[x], freq[y]);
                }
            }
            cnt /= 2; 
            max_beautiful = max(max_beautiful, cnt);
        }

        cout << max_beautiful << endl;
    }

    return 0;
}