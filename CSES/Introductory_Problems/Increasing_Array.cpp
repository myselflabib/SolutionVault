#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int x[n], count = 0;
    for (long long int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for (long long int i = 1; i < n; i++)
    {
        if(x[i] < x[i-1]){
            count += x[i-1]-x[i];
            x[i] = x[i-1];
            
        }
        
    }
    
    cout << count << endl;

    return 0;
}