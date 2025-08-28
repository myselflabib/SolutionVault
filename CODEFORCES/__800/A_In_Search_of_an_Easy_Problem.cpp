#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int hCount = 0;

    for(int i =0; i<n; i++)
    {
        int a;
        cin >> a;
        if(a){
            hCount++;
            break;
        }
    }
    
    if(hCount) cout << "HARD" << endl;
    else cout << "EASY" << endl;
    return 0;
}