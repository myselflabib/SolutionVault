#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v ={1, 2, 3, 4, 5};
    // v.push_back(6);
    // v.push_back(7);
    // v.pop_back();
    // v.insert(v.begin()+2, 10);
    // v.erase(v.begin()+2, v.begin()+4);

    // replace(v.begin(), v.end(), 3, 100);

    // vector<int> :: iterator it =find(v.begin(), v.end(), 4);
    auto it =find(v.begin(), v.end(), 4);

    if(it == v.end()){
        cout << "not found" << endl;
    }
    else{
        cout << "found" << endl;
    }
    // for (int i = 0; i < V.size(); i++)
    // {
    //     cin >> V[i];
    // }
    // for (int i = 0; i < V.size(); i++)
    // {
    //     cout << V[i] << endl;
    // }
    for(auto x: v){
        cout << x << endl;
    }
    
    return 0;
}