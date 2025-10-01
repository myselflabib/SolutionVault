#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        long long int count =1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            count*= arr[i];
        }
        cout << count << endl;
    }
    
    return 0;
}