#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;  

    while (T--)
    {
        int n;
        cin >> n;  

        vector<int> a(n);  
        vector <int> srt(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];  
        }



        for (int i = 0; i < n; i++)
        {
            srt[i] = a[i];
        }

        sort(a.begin(), a.end());
        int SORT = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == srt[i])
            {
                SORT = 1;
            }
            else{
                SORT = 0;
                break;
            }
            
        }
        
        if (SORT)
        {
            cout << "YES" << endl;  
        }
        else
        {
            cout << "NO" << endl;   
        }
    }

    return 0;
}