#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    while(cin >> N && N != 0) {
        long long G = 0;

        for(int i = 1; i < N; i++) {
            for(int j = i+1; j <= N; j++) {
                int a = i, b = j;

                while(b != 0) {
                    int temp = b;
                    b = a % b;
                    a = temp;
                }

                G += a;
            }
        }

        cout << G << endl;
    }
    return 0;
}
