#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int l = 0, r = 10;
    int idx = -1, flag = 0;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        int square = mid * mid;
        if (square == n)
        {
            flag = 1;
            idx = mid;
            break;
        }

        if (square > n)
        {
            r = mid - 1;
        }

        else
        {
            l = mid + 1;
        }
    }

    if (flag)
    {
        cout << idx << endl;
    }
    else
    {
        cout << idx << endl;
    }
    
}