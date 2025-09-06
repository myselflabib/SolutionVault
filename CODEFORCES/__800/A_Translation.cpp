#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    int flag = 0;
    
    string w = s;
    reverse(w.begin(), w.end());

    if(w!=t){
        cout << "NO" << endl;
    }

    else{
        cout << "YES" << endl;
    }
    
    return 0;
}