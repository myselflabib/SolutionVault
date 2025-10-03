#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long flagstones_n = (n + a - 1) / a; 
    long long flagstones_m = (m + a - 1) / a; 

    long long total_flagstones = flagstones_n * flagstones_m; 
    cout << total_flagstones << endl;

    return 0;
}
