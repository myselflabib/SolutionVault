#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    int abc = x, bca, cab;
    
    int a = abc/100;
    int c = abc%10;
    int b = (abc/10)%10;

    bca = (b*100)+(c*10)+a;
    cab = (c*100)+ (a*10)+b;
    
    cout << abc+bca+cab << endl;
    
    return 0;
}