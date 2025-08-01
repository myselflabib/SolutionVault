#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y;
    cin >> n >> x >> y;
    string digit;
    cin >> digit;
    

    int xth = digit[x-1]-'0';
    int yth = digit[y-1]-'0';
    

    if(xth != 0 && yth%xth == 0){
        cout<< "YES" << endl;
    }


    else if(yth!=0 && xth%yth== 0){
        cout << "YES" << endl;
    }
    else{
        cout<< "NO" << endl;
    }
    
    
    return 0;
}