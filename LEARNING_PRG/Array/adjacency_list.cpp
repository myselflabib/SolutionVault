#include <bits/stdc++.h>
using namespace std;

void addEdgeM(vector<vector<int>> &mat, int i, int j){
    mat[i][j] = 1;
    mat[j][i] = 1;
}

void addEdgeAdj(vector<vector<int>> &adj, int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void displayAdj(vector<vector<int>>& adj) {
    for (int i = 0; i < adj.size(); i++) {
        cout << i << ": "; 
        for (int j : adj[i]) {
            cout << j << " "; 
        }
        cout << endl; 
    }
}

void display(vector<vector<int>> &mat){
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat.size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        
        cout << endl;
    }
    
}

int main()
{
    vector<vector<int>> mat(4, vector<int>(4, 0));
    vector<vector<int>> adj(5);

    addEdgeM(mat, 0, 1);
    addEdgeM(mat, 0, 2);
    addEdgeM(mat, 1, 2);
    addEdgeM(mat, 2, 3);

    addEdgeAdj(adj, 0, 1);
    //addEdgeAdj(adj, 1, 0);
    addEdgeAdj(adj, 1, 3);
    addEdgeAdj(adj, 2, 1);
    addEdgeAdj(adj, 2, 3);
    //addEdgeAdj(adj, 3, 1);
    //addEdgeAdj(adj, 3, 2);
    addEdgeAdj(adj, 3, 4);
    //addEdgeAdj(adj, 4, 3);

    //display(mat);

    displayAdj(adj);
    
    return 0;
}