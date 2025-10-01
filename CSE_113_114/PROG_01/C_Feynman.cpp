#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(1){
        cin >> n;
        if(n==0) break;
        int sqNum = 0;
        for (int i = 1; i <= n; i++)
        {
            sqNum+= (i*i);
        }
        cout << sqNum << endl;
        
    }
    return 0;
}