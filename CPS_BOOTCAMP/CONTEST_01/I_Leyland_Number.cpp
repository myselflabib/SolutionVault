#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, aPower, bPower;
    cin >> a >> b;

    aPower = pow(a, b);
    bPower = pow(b, a);

    cout << aPower+bPower << endl;
    return 0;
}