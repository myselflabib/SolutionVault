#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["tamim"] = 2;
    mp["ramim"] = 6;
    mp["labib"] = 8;

    for (auto i = mp.begin(); i!=mp.end(); i++){
        cout << i->first << " " << i->second << endl;
    }

    
    
    return 0;
}