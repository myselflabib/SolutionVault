// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector <int> rep(N);
    for (int i = 0; i < N; i++)
    {
        cin >> rep[i];
    }

    for (int i = 0; i < N; i++)
    {
        if(0 < rep[i]){
            cout << "1" << " ";
        }
        else if(0 == rep[i]){
            cout << "0" << " ";
        }
        else{
            cout << "2" << " ";
        }
    }
    
    
    return 0;
}