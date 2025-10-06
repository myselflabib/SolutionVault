#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    cin >> r;

    int count = 0;
    while(r--){
        int l, c;
        cin >> l >> c;

        if((c-l) >= 2) count++;
    }

    cout << count << endl;
    return 0;
}