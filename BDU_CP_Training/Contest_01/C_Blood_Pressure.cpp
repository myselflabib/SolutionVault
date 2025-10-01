#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    double c;

    c = ((a-b)/3.0)+b;

    if(c-(int)c!=0){
        cout << fixed << setprecision(7) << c << endl;
    }
    else{
        cout << c << endl;
    }
    return 0;
}