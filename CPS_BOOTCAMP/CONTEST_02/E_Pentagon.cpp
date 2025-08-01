#include<bits/stdc++.h>
using namespace std;

int main(){
    char s1, s2, t1, t2;
    cin >> s1 >> s2 >> t1 >> t2;

    if((s1+1)!=s2 && (t1+1)!=t2 && (s1-4)!=s2 && (t1-4)!=t2){
        cout << "Yes" << endl;
    }

    else{
        cout << "No" << endl;
    }
    return 0;
}