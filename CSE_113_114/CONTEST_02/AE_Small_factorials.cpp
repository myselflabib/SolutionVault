#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;

        int fac = 1;
        for (int i = 1; i <= q; i++){
            fac*=i;
        }
        cout << fac << endl;

    }
    
    return 0;
}