#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[5];   
        int cnt = 0;
        int pos = 1;

        while (n > 0) {
            int d = n % 10;
            if (d != 0) {
                arr[cnt++] = d * pos;
            }
            n /= 10;
            pos *= 10;
        }

        cout << cnt << endl;
        for (int i = 0; i < cnt; i++) {   
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
