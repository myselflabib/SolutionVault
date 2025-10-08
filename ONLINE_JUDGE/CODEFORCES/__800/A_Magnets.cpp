// https://codeforces.com/contest/344/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    vector <int> v(t);
    cin >> v[0];

    int group = 0;

    for (int i = 1; i < t; i++)
    {
        cin >> v[i];
        if(v[i]!=v[i-1]){
            group++;
        }
    }

    cout << group+1 << endl;  
    
    return 0;
}