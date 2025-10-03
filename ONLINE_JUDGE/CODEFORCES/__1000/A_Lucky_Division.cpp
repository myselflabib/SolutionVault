#include <bits/stdc++.h>
using namespace std;

bool isLucky(int x) {
    while (x > 0) {
        int d = x % 10;
        if (d != 4 && d != 7) return false;
        x /= 10;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    vector<int> lNum;

    for (int i = 1; i <= 1000; i++) {
        if (isLucky(i)) {
            lNum.push_back(i);
        }
    }

    if (isLucky(n)) {
        cout << "YES" << endl;
        return 0;
    }

    for (int i = 0; i < lNum.size(); i++) {
        if (n % lNum[i] == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
