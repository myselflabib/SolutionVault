#include <bits/stdc++.h>
using namespace std;

string multiply(string num1, string num2) {
    if (num1 == "0" || num2 == "0") return "0";

    int n = num1.size();
    int m = num2.size();
    vector<int> result(n + m, 0);

    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            int mul = (num1[i]-'0') * (num2[j]-'0');
            int sum = mul + result[i + j + 1];

            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    string res = "";
    int i = 0;
    while (i < result.size() && result[i] == 0) i++; 
    for (; i < result.size(); i++) res += (result[i] + '0');
    return res;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        string a, b;
        cin >> a >> b;
        cout << multiply(a, b) << endl;
    }
    return 0;
}
