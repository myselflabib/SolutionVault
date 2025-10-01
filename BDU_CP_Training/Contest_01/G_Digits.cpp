#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n, k, digit=0;
    cin >> n >> k;

    int i = 0;
    while (n!=0)
    {
        digit += (n%10)*(pow(k, i));
        n/=10;
        i++;
    }

    cout << digit << endl;
    
    return 0;
}