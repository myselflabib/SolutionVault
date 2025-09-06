#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int count = 0, flag =0;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i-1] == s[i]){
            count++;
            if(count>=7){
                flag = 1;
                break;
            }
        }
        else{
            count = 1;
        }
    }
    
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}