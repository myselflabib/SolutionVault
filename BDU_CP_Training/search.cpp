#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sort(arr, arr+n);
    int q;

    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int flag = 0;
        int l = 0, r= n-1;
        
        int idx = -1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if (arr[mid]==x)
            {
                flag = 1;
                idx = mid;
                break;
            }

            if(arr[mid]>x){
                r = mid-1;
            }
            else{
                l = mid+1;
            }

        }
        if (flag)
        {
            cout << idx << endl;
        }

        else cout << idx << endl;
        
    }
    
    
}