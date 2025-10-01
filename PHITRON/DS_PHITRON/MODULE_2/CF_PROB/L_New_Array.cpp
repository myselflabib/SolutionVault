// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    vector <int> c;
    for (int i = 0; i < n; i++)
    {
        c.push_back(B[i]);
    }
    for (int i = 0; i < n; i++)
    {
        c.push_back(A[i]);
    }

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
    
    
    return 0;
}