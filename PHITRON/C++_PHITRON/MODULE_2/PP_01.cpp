#include<bits/stdc++.h>
using namespace std;
int* get_array(int N){
    int *B = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }

    for (int i = 0; i < N; i++)
    {
        cout << B[i] << endl;
    }
    return B;
}
int main(){
    int N;
    cin >> N;
    int *A = get_array(N);
    delete[] A;
    return 0;
}