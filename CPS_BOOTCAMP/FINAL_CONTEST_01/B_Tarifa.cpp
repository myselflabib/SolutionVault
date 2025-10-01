#include<bits/stdc++.h>
using namespace std;

int main(){
   int t, x, p, q;
    cin >> t >> x;
    q = x;
    int TotalUse = 0;
   for (int i = 0; i < x; i++)
   {
        cin >> p;
        TotalUse += p;
   }
   

    // cout << TotalUse << endl;
    int left = (x*t)-TotalUse;
   
    cout << left+t << endl;
    return 0;
}