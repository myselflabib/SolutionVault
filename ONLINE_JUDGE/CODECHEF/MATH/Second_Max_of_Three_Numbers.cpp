#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--)
    {
        long long A, B, C;
        cin >> A >> B >> C;
        if(A>B && A>C){
            cout << max(B, C) << endl;
        }

        else if(B>A && B>C){
            cout << max(A, C) << endl;
        }
        else if(C>A && C>B){
            cout << max(A, B) << endl;
        }
    }
    
    return 0;
}