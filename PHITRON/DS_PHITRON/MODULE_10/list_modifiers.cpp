#include<bits/stdc++.h>
using namespace std;

int main(){
    list <int> l = {10, 20, 30, 40, 50};
    // list <int> l2;
    // l2 = l;
    // l2.assign(l.begin(), l.end());

    // l.push_back(40);
    // l.push_front(100);

    // l.pop_back();
    // l.pop_front();

    // l.insert(next(l.begin(), 2), 100);

    // cout << *next(l.begin(), 2)<< endl;

    // l.erase(next(l.begin(), 3));
    // l.erase(next(l.begin(), 2), next(l.begin(), 4));

    // replace(l.begin(), l.end(),30, 200);
    auto it = find(l.begin(), l.end(), 40);
    if(it == l.end()){
        cout << "Not Found" << endl;
    }
    else{
        cout << "Found" << endl;
    }


    for(int val: l){
        cout << val << endl;
    }
    return 0;
}