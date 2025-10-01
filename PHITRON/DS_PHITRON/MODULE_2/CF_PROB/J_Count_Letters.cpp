// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J


#include<bits/stdc++.h>
using namespace std;

int main(){
   string S;
   cin >> S;
   vector <int> freq(26, 0);
    for (int i = 0; i < S.size(); i++)
    {
        freq[S[i] - 'a']++;
    }
    for (int i = 0; i < S.size(); i++)
    {
        cout << freq[i];
    }
    
    return 0;
}