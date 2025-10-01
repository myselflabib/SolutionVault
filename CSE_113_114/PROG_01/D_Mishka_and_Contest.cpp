#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int count = 0;
    int i;
    for (i = 0; i < n; i++)
    {
            if(a[i] <= k){
                count++;
            }
            else break;
    }
    
    for (int j = n-1; j >=0; j--)
    {
        if(j>i && a[j] <= k){
                count++;
            }
            else break;
    }
    
    cout << count << endl;
    return 0;
}