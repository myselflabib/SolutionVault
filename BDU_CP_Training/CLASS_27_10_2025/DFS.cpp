#include <bits/stdc++.h>
using namespace std;

vector <int> g[9];
vector <int> visit(9);


void dfs(int x){

    visit[x] = 1;
    cout << x << " ";

    for(auto j: g[x]){
        if(visit[j] == 0){
            dfs(j);
        }
    }
}

int main()
{

    int n, m;
    cin >> n >> m;

    for (int i = 1; i < m+1; i++)
    {
        int x, y;
        cin >> x >> y;

        g[x].push_back(y);
        g[y].push_back(x);

    }


    // for (int i = 1; i < n+1; i++)
    // {
    //     cout << i << "-> ";
    //     for(auto j: g[i]){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    dfs(1);
    


    
    
    return 0;
}