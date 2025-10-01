#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    char x[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> x[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int k = 0; k < 2; k++)
        {
        cout << endl;
        for (int j = 0; j < b; j++)
        {
            cout << x[i][j];
        }
        }
        
    }
    
    
    return 0;
}