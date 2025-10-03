#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    string str;
    while (getline(cin, str)) {
        if (str.empty()) continue;
        set<string> palSet;

        int n = str.size();
        for (int i = 0; i < n; i++) {
            for (int len = 1; i + len <= n; len++) {
                string sub = str.substr(i, len);
                if (isPalindrome(sub)) {
                    palSet.insert(sub);
                }
            }
        }

        cout << "The string '" << str << "' contains " 
             << palSet.size() << " palindromes." << endl;
    }
    return 0;
}
