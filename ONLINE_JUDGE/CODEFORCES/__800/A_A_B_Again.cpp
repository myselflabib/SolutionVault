#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int x;
        cin >> x;

        int sum = 0;
        while(x)
        {
            sum+=(x%10);
            x/=10;
        }

        cout << sum << endl;
        
    }
    return 0;
}