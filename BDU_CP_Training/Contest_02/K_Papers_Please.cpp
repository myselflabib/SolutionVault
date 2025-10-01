#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int flag = 0;
    while (n--)
    {
        int a;
        cin >> a;
        if(a%2==0){
            if(a%3==0 || a%5==0){
                flag = 0;
                
            }
            else{
                flag =1;
                break;
            }
           
        }
        
    }
    if(flag){
            cout << "DENIED" << endl;
        }
    else{
        cout << "APPROVED" << endl;
        }
    
    return 0;
}