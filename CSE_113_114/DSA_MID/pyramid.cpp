#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        // for (int j = 1; j <= n-i; j++){
        //     cout << "*";
        // }
        // for (int j = 1; j <= i; j++){
        //     cout << j;
        // }

        // for (int j = i-1; j>=1; j--){
        //     cout << j;
        // }
        for(int i = n; i>=1; i--){
            for (int j = 1; j <= i; j++){
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}