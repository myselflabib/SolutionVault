#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, A;
    cin >> N >> A;

    int totalYen = N/500;
    if(N-(totalYen*500)<=A || N<=500){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}