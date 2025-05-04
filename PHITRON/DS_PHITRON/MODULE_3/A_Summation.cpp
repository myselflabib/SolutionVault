#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <long long int> A(n);
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>> A[i];
        sum += A[i];
    }
    if(sum >= 0){
    cout << sum << endl;
    }
    else{
        cout << -sum << endl;
    }
    return 0;
}