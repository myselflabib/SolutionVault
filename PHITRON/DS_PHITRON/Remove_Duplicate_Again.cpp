#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int>li;
    int val;
    while (true){
        cin >> val;
        if (val == -1) break;
        li.push_back(val);
    }

    li.sort();
    li.unique();

    for (int v: li){
        cout << v << " ";
    }
    cout << endl;

    return 0;
}
