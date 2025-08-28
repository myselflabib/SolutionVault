#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >> w;
    int bananacost = 0;
    for (int i = 1; i <= w; i++)
    {
        bananacost += (k*i);
    }

    cout << bananacost-n << endl;
    return 0;
}