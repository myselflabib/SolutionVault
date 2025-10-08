// https://codeforces.com/problemset/problem/136/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<int> v(t);

    for (int i = 0; i < t; i++){
        cin >> v[i];
    }

    vector <int> v2(t);
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++){
            if(i+1==v[j]) v2[i] = j+1;
        }
        
    }

    for (int i = 0; i < t; i++)
    {
        cout << v2[i] << " ";
    }
    
    

    
    return 0;
}