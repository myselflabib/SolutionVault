#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >> w;
    long long int bananacost = 0;
    for (int i = 1; i <= w; i++)
    {
        bananacost += (k*i);
    }

    if(bananacost-n<=0) cout << 0 << endl;
    else cout << bananacost-n << endl;
    return 0;
}