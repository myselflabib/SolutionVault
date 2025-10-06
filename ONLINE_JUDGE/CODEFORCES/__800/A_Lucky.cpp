#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        string s;
        cin >> s;

        vector<int> v;

        int num = 0;

        for (int i = 0; i < s.size(); i++){
            if (s[i] >= '0' && s[i] <= '9'){
                v.push_back((s[i] - '0'));
                //cout << v[i];
            }
        }
        if((v[0]+v[1]+v[2])==(v[3]+v[4]+v[5])) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}