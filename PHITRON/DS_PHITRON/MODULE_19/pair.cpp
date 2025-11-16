#include <bits/stdc++.h>
using namespace std;

int main()
{
    // pair<string, int> p;

    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    // p = make_pair("LABIB", 3);

    // p = {"LABIB", 3};



    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    
    
    // cout << p.first << " " << p.second << endl;
    return 0;
}