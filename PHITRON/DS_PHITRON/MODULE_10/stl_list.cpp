#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {1, 2, 3, 4};
    // int a[] = {10, 20, 30};
    vector <int> v = {10, 20 , 30};
    list<int> l2(v.begin(), v.end());
    // l2.clear();
    l2.resize(5, 100);
    for (int val: l2)
    {
        cout << val << endl;
    }
    
    // for (auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    
    return 0;
}