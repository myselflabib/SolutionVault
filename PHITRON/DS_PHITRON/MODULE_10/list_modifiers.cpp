#include<bits/stdc++.h>
using namespace std;

int main(){
    list <int> l = {10, 20, 30};
    // list <int> l2;
    // l2 = l;
    // l2.assign(l.begin(), l.end());

    // l.push_back(40);
    // l.push_front(100);

    // l.pop_back();
    // l.pop_front();

    l.insert(next(l.begin(), 2), 100);

    // cout << *next(l.begin(), 2)<< endl;

    for(int val: l){
        cout << val << endl;
    }
    return 0;
}