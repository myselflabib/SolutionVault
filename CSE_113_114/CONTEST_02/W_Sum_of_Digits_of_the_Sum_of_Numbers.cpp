#include <bits/stdc++.h>
using namespace std;

void multiply(vector<int> &num, int x) {
    int carry = 0;
    for (int i = 0; i < num.size(); i++) {
        int prod = num[i] * x + carry;
        num[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry) {
        num.push_back(carry % 10);
        carry /= 10;
    }
}

void printBig(vector<int> &num) {
    for (int i = num.size()-1; i >= 0; i--) cout << num[i];
    cout << "\n";
}

int main() {
    int K;
    cin >> K;

    int firstCount = 0;
    for (int a = 1; a <= 9; a++) {
        for (int b = 1; b <= 9; b++) {
            if (a + b <= 9) firstCount++;
        }
    }

    int otherCount = 0;
    for (int a = 0; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            if (a + b <= 9) otherCount++;
        }
    }

    vector<int> result;
    result.push_back(1); // start with 1

    multiply(result, firstCount);
    for (int i = 1; i < K; i++) {
        multiply(result, otherCount);
    }

    printBig(result);
    return 0;
}
