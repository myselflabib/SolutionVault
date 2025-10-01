#include<bits/stdc++.h>
using namespace std;

int main(){
    int T, N, A[100], B[100];
    cin >> T;
     while (T--) {
        int N;
        cin >> N;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }

        int count = 0;
        for (int i = 0; i < N; i++) {
            if (A[i] > B[i]) {
                count += (A[i] - B[i]);
            }
        }

        cout << count << endl;
    }
    
    return 0;
}