#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x = 0;
    int y = n-1;

    while (x<=y)
    {
        if(arr[x] + arr[y] == m){
            cout << arr[x] << " " << arr[y];
            break;
        }

        else if(arr[x] + arr[y] > m){
            y--;
        }

        else if(arr[x]+arr[y] < m){
            x++;
        }

    }
    
    
    return 0;
}