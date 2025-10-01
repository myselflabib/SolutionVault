#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--)
    {
        long long int t;
        cin >> t;
        long long int a[t];
        for (int i = 0; i < t; i++)
        {
            cin >> a[i];
        }
        long long int sum = 0;
        for (int i = 0; i < t; i++)
        {
            sum+= a[i];
        }
        long long int square = sqrt(sum);

        if(square*square == sum){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }
    
    return 0;
}