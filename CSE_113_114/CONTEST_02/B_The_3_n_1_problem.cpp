#include <iostream>
using namespace std;

int cycle_length(int n) {
    int count = 1;
    while (n != 1) {
        if (n % 2 == 0) n /= 2;
        else n = 3*n + 1;
        count++;
    }
    return count;
}

int main() {
    int i, j;
    while (cin >> i >> j) {
        int start = min(i, j);
        int end = max(i, j);
        int maxCycle = 0;
        for (int n = start; n <= end; n++) {
            int c = cycle_length(n);
            if (c > maxCycle) maxCycle = c;
        }
        cout << i << " " << j << " " << maxCycle << endl;
    }
    return 0;
}
