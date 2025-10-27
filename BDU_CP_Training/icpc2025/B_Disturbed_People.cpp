#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<int> n(t);

    int on = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
        if (n[i] == 0)
        {
            on++;
        }
    }

    int count = 0;

    if (on)
    {
        for (int i = 1; i < t; i++)
        {
            if ((n[i - 1]) == 1 && (n[i] == 1))
            {
                count++;
            }

            else if ((n[i - 1]) == 0 && (n[i] == 0))
                count = 0;
        }
        cout << count << endl;
    }

    else
    {
        cout << 0 << endl;
    }

    return 0;
}