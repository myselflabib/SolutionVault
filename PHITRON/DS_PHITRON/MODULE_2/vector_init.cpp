#include<bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> v;
    // vector <int> v(5);
    vector <int> v(10, 0);
    vector <int> v2(v);
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    
    return 0;
}