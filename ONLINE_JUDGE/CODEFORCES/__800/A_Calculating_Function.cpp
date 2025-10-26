#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int even = (n/2)*((n/2)+1);
    long long int odd = 0;

    if (n%2==0) odd =(n/2)*(n/2);
    else odd =((n/2)+ 1)*((n/2)+1);

    cout << even-odd << endl;
    
    return 0;
}