#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        long long a[t];
        for (int i = 0; i < t; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < t; i++)
        {
            if(a[i]%2!=0){
                count++;
            }
        }
        cout << count << endl;
        
        
    }
    

    return 0;
}