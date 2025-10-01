#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int maximum = max({a, b, c});

        int extra = 0;
        extra+= maximum-a;
        extra += maximum-b;
        extra += maximum-c;

        int coin = n;

        n = n-extra;

        if(extra>coin) cout << "NO" << endl;

        else if(n%3==0) cout << "YES" << endl;

        else cout << "NO" << endl;
        
    }
    
    return 0;
}