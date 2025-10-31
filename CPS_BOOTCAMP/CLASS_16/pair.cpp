#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < v.size(); i++){
        cin >> v[i].first >> v[i].second;
    }

    // sort(v.begin(), v.end());
    // sort(v.rbegin(), v.rend());

    // sort(v.begin(), v.end(), greater<pair<int, int>>());

    sort(v.begin(), v.end(), );


    
    for (int i = 0; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }


    // pair<string, int> info1, info2;

    // cin >> info1.first >> info2.second;
    // cout << endl;
    // cin >> info1.first >> info2.second;

    // cout << info1.first << " " << info1.second << endl;
    // cout << info2.first << " " << info2.second << endl;


    return 0;
}