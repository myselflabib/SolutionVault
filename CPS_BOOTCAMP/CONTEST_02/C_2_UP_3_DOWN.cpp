#include<bits/stdc++.h>
using namespace std;

int main(){
    int a , b;
    cin >> a >> b;

    if(((b-a)<=2 && (b-a)>0) || ((a-b) <= 3 && (a-b)>0)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}