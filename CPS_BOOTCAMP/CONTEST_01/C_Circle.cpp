#include<bits/stdc++.h>
using namespace std;

int main(){
    double r;
    double area, circum;
    double pi = M_PI;

    cin >> r;

    area = pi*r*r;
    circum = 2*pi*r;
    cout << fixed << setprecision(6);
    cout << area << " " << circum << endl;
    return 0;
}