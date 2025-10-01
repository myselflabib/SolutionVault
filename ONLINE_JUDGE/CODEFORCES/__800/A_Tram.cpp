#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int maxSize =0, remain = 0;
    while(n--){
        int a, b;
        cin >> a >> b;
    
        remain = (remain+b) -a;
        
        if(maxSize<remain){
            maxSize = remain;
        } 
        
    }

    cout << maxSize << endl;
    return 0;
}