#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int arrR[n];
    for (int i = 0; i < n; i++)
    {
        arrR[i] = arr[n-i-1];
    }
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = arrR[i];
        cout << arr[i] << " ";
    }
    
    
    return 0;
}