#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, c, d, ab, cd;
    cin >> a >> b >> c >> d;

    ab = pow(a,b);
    cd = pow(c,d);

    if(ab/2>cd/2){
        cout << "YES" << endl;
    }

    else{
        cout << "NO" << endl;
    }
    return 0;
}