#include <bits/stdc++.h>
using namespace std;

vector <int> g[100];
vector <int> visit(100);

void dfs(int x){

    
    visit[x] = 1;
    //cout << x << " ";

    for(auto j: g[x]){
        if(visit[j] == 0){
            dfs(j);
        }
    }
}

int main(){

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

    
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if(visit[i]==0){
         dfs(i);
         count++;
        }
    }
    
    cout << count << endl;
    // int count = 0;
    for (int i = 0; i < m; i++){
        count+=visit[i];
    }

    if(count == n) cout << "Connected" << endl;

    else cout<< "Not Connected" << endl;
    
    
    return 0;
}