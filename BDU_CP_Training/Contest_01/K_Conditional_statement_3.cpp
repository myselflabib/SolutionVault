#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;

    if(x<-4){
        cout << x+5 << endl;
    }
    else if(-4<= x && x<=7){
        cout << (x*x)-(3*x)<< endl;
    }
    else{
        cout << (x*x*x)+(2*x) << endl;
    }
    return 0;
}