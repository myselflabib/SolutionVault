#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int countX = 0,countY = 0, countZ = 0;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        countX+=a;
        countY+=b;
        countZ+=c;
    }
    if(countX==0 && countY==0 &&countZ==0) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}