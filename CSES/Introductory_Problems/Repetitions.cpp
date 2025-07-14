#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    int count = 1, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] != s[i-1]){
            ans = max(count, ans);
            count = 1;
        }
        else{
            count++;
        }
    }

    // ans = max(count, ans);
    cout << ans << endl;
        
    return 0;
}