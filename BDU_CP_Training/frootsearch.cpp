#include <iostream>
using namespace std;

int main()
{
    double n;
    cin >> n;

    double l = 0, r = n;
    // int idx = -1, flag = 0;

    while (abs(r - l) >= 0.00000001)
    {
        double mid = (l + r) / 2.0;
        double square = mid * mid*mid;

        if (square >= n)
        {
            r = mid;
        }

        else
        {
            l = mid;
        }
    }

    cout << l << endl;
}