#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        int idx = 0;

        if(arr[0] == arr[1]){
        for (int i = 2; i < n; i++)
        {
                
                if(arr[1]!=arr[i]) {
                    idx = i;
                    break;
                }
            
        }
    }

    else{
        if(arr[0] != arr[2]){
            idx = 0;
        }
        else{
            idx = 1;
        }
    }

        cout << idx+1<< endl;
        
        
    }
    return 0;
}