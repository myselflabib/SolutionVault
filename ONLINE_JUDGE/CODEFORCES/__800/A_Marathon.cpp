#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int a[4];
        cin >> a[0] >> a[1] >> a[2] >> a[3];

        int count = 0;
        for (int i = 1; i < 4; i++)
        {
            if(a[0]< a[i]) count++;
        }

        cout << count << endl;
        
    }
    return 0;
}