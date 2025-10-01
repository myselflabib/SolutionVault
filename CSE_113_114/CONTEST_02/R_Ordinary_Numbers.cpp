#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;

        string s = to_string(n);
        int len = s.length();

        int count = 9 * (len - 1); // ordinary numbers with fewer digits

        // ordinary numbers with same number of digits
        for(int d = 1; d <= 9; d++) {
            string temp(len, '0' + d);
            long long num = stoll(temp);
            if(num <= n) count++;
        }

        cout << count << endl;
    }

    return 0;
}
