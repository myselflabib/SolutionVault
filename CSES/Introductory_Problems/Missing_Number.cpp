#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N-1; i++)
    {
        cin >> A[i];
    }
    sort(A, A+N);
    for (int i = 0; i < N-1; i++)
    {
        if (A[i+1]!= i)
        {
            cout << i << endl;
        }
        
    }
    
    
    return 0;
}