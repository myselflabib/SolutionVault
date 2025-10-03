#include <bits/stdc++.h>
using namespace std;


int check(int a[], int n, int m){
    int l = 0, h = n-1;
        int count = -1;
        while(l<=h)
        {
            int mid = (l+h)/2;
            if(a[mid] <= m){
                count = mid;
                l = mid+1;
            }
            
            else{
                h = mid-1;
            }
        }

        return count+1;

}
int main()
{
    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(a, a+n);

    for (int i = 0; i < m; i++)
    {
        cout << check(a, n, b[i]) << " ";
        
    }
    
    
    
    return 0;
}