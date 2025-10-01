#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[4], b[4], c[4], l[4];
    

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> c[i];
    }

    sort(a, a+3);
    sort(b, b+3);
    sort(c, c+3);
    
    l[0] = a[1];
    l[1] = b[1];
    l[2] = c[1];

    sort(l, l+3);

    cout << l[1] << endl;

    return 0;
}