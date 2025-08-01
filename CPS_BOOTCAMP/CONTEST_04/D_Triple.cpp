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
        long long count = 0;
        long long past = a[0], fut = a[0];
        for (int i = 0; i < t; i++)
        {
            if(past==fut){
            count++;
            fut = a[i];
            }
            else{
                past = a[i];
            }

            cout << count << endl;
        }
        
        
    }
    
    return 0;
}