#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, L, R, X, Y;
    cin >> N >> L >> R;
    int count = 0;
    while (N--)
    {
        cin >> X >> Y;
        if (X<= L && Y >= R)
        {
            count++;
        }
        
    }
    cout << count << endl;
    return 0;
}