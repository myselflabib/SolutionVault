#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    while (a.length() < b.length()){
         a = '0' + a;
    }
    while (b.length() < a.length()){
        b = '0' + b;
    }
    

    int ath, bth;
    bool dif = true;
        for (int i = a.length()-1; i >= 0; i--)
        {
            ath = a[i] -'0';
            bth = b[i] - '0';
            if(ath+bth>=10){
                dif = false;
                break;
            }
            else{
                dif = true;
            }
        }
        
    if(dif){
        cout << "Easy" << endl;
    }
    else{
        cout << "Hard" << endl;
    }
    return 0;
}