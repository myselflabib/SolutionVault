#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    
    while(n--){
        cin >> m;
        vector<int> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }

        bool flag = true;
        for (int i = 0; i < m-1; i++)
        {
            
            if(a[i] > a[i+1]){
                flag = false;
                break;
            }
        }

        int one = 0, zero = 0;
        for (int i = 0; i < m; i++)
        { 
                if(a[i]==1){
                one++;
            }
            else if(a[i]==0){
                zero++;
            }
            
        }
        
        if(one>zero){
            cout << zero << endl;
        }
        else{
            cout << one << endl;
        }
        
        
    }
    return 0;
}