#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int>v(n);

        for (int i = 0; i < n; i++){
            cin >> v[i];
        }


        bool ok = false;
        for (int i = 0; i < n; i++){
            for (int j = 1; j < n; j++){
            if((v[i]%2) != (v[j]%2)){
                ok = true;
                break;
            }
        }
        }
        
        if(ok) sort(v.begin(), v.end());


        for (int i = 0; i < n; i++){
            cout << v[i] << " ";
        }

        cout << endl;
    }
    return 0;
}