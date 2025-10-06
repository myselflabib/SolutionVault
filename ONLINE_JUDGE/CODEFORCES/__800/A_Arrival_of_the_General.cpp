#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int min = a[0], max = a[0];
    int idx_min = 0, idx_max = 0;

    for (int i = 0; i < n; i++)
    {
        if (min >= a[i])
        {
            min = a[i];
            idx_min = i;
        }

        if (max < a[i])
        {
            max = a[i];
            idx_max = i;
        }
    }


    int sec;

    sec = idx_max+(n-1-idx_min);

        if (idx_min < idx_max){
            sec--;
        }


        cout << sec << endl;
    

    return 0;
}