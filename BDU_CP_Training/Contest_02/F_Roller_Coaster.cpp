#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int count = 0;
    while(n--){
        int h;
        cin >> h;
        if(h>=k) count++;
    }
    cout << count << endl;
    return 0;
}