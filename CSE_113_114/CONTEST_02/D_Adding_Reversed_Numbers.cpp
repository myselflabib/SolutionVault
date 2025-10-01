#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        int tempX = 0, tempY = 0;
        while (x != 0) {
            tempX = tempX * 10 + x % 10;
            x /= 10;
        }

        while (y != 0) {
            tempY = tempY * 10 + y % 10;
            y /= 10;
        }

        int sum = tempX + tempY;
        int tempsum = 0;
        while (sum != 0) {
            tempsum = tempsum * 10 + sum % 10;
            sum /= 10;
        }

        cout << tempsum << endl;
    }

    return 0;
}
