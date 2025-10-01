#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    for (int i = n-m; i < n; i++)
    {
        cout << a[i] << " ";
    }


    for (int i = 0; i < n- m; i++)
    {

        cout << a[i] << " ";
    }

    return 0;
}