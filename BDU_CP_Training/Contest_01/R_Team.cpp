#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    while (n--)
    {
        int p, v, t;
        cin >> p >> v >> t;
        if((p+v+t)>=2){
            count++;
        }
    }
    cout << count << endl;
    
    return 0;
}