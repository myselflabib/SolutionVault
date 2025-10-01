#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int s1, s2, s3;

    s1 = n/100;
    s2 = (n%100)/10;
    s3 = (n%100)%10;

    cout << s1+s2+s3 << endl;
    return 0;
}