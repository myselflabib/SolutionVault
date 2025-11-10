#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<long long, long long>x, pair<long long, long long>y){
    if(x.first==y.first){
        if(x.second>y.second){
            return true;
        }
        else return false;
    }

    else{
        if(x.first<y.first) return true;
        else return false;
    }
}

int main()
{

    int t;
    cin >> t;

    while(t--){
    int n;
    cin >> n;

    vector<pair<long long, long long>> v(n);

    for (int i = 0; i < v.size(); i++){
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(),cmp);


    
    for (int i = 0; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
}

    return 0;
}