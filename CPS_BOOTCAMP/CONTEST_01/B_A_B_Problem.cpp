#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int INT_div = a/b;
    int INT_remain = a%b;
    double RE_div = (double)a/b;
    
    cout << INT_div << " " << INT_remain << " " << fixed << setprecision(5)<< RE_div;
    return 0;
}