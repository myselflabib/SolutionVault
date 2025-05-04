#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int *A = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int M;
    cin >> M;
    int *B = new int[M];
    for (int i = 0; i < N; i++)
    {
        B[i] = A[i];
    }
    
    for (int i = N; i < M; i++)
    {
        cin >> B[i];
    }
    
    for (int i = 0; i < M; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;
    delete[] A;

    return 0;
}