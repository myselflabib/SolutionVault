#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int count = 0;
    while (true)
    {
        int all_even = true;
        for (int i = 0; i < n; i++)
        {
            if (num[i] % 2 != 0)
            {
                all_even = false;
                break;
            }
        }
        if (!all_even)
            {
                break;
            }
            for (int i = 0; i < n; i++)
            {
                num[i] /= 2;
            }
            count++;
        }
        cout << count << endl;

        return 0;
}