#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>> x;
    int n[x];
    for (int i = 0; i < x; i++)
    {
        cin >> n[i];
    }
    
    sort(n, n+x);
    int count = 0;
    for (int i = 0; i < x; i++)
    {
        if(n[i]!=n[i+1]){
            count++;
        }
    }

    cout << count << endl;
    
    
    return 0;
}