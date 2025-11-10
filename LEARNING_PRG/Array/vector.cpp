#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> v(5);
    
    for (int i = 0; i < v.size(); i++){
        cin >> v.at(i);
    }

    for (int i = 0; i < v.size(); i++){
        cout << v.at(i) << " ";
    }
    
    
    return 0;
}