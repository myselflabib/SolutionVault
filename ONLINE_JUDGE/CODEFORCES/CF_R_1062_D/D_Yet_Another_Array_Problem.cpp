#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        vector<long long> v(n);

        for (int i = 0; i < n; i++){
            cin >> v[i];
        }

        
        for (int i = 0; i < n; i++){
                long long x = gcd(j, v[i]);
                if (x == 1){
                    cout << j << " ";
                    break; 
                }
        }

        cout << endl;
    }

    return 0;
}
