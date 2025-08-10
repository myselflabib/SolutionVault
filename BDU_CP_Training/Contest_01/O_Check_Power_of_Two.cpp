#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        bool flag = false;
        long long pTow, i=0;
        while (pTow<n)
        {
            pTow = pow(2, i);
            i++;
            if(n==pTow){
                flag = true;
                break;
            }

        }

        if(flag){
            cout << "True" << endl;
        }
        else{
            cout << "False" << endl;
        }
        
    }
    
    return 0;
}