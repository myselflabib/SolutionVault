#include <iostream>
using namespace std;

int main() {
    int p0, c1, c2, c3;
    while (cin >> p0 >> c1 >> c2 >> c3) {
        if (p0 == 0 && c1 == 0 && c2 == 0 && c3 == 0) break;

        int deg_per_num = 9;

        int total = 720;

        total += ((p0 - c1 + 40) % 40) * deg_per_num;

        total += 360 + ((c2 - c1 + 40) % 40) * deg_per_num;

        total += ((c2 - c3 + 40) % 40) * deg_per_num;

        cout << total << endl;
    }
    return 0;
}
