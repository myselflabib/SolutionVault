#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int x, n, arr[100];
        cin >> x >> n;
        
        int sum = 0;
        if(n%2==0) sum=0;
        else sum = x;

        cout << sum << endl;
    }
    
    return 0;
}