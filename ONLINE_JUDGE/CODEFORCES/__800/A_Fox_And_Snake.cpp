///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 20/11/2025   ||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); 
    cout.tie(0);

    int a, b;
    cin >> a >> b;
    
    // vector<vector<int>> v(a, vi (b));

    // for (int i = 0; i < a; i++){
    //     for (int j = 0; j < b; j++){
    //         cin >> v[i][j];
    //     }
        
    // }

    // for (int i = 0; i < a; i++){
    //     for (int j = 0; j < b; j++){
    //         cout << v[i][j] << " ";
    //     }

    //     cout << endl;
    // }


    vi v(a+1);
    for (int i = 2; i < v.size(); i+=2){
        int first = 0;
        if(!first) {
            v[i]=1;
            first++;
        }

        else{
            first--;
        }

    }

    // for (int i = 1; i < a; i++){

    //     cout << v[i];
    // }
    
    int first = 0;
    for (int i = 1; i <= a; i++){
        int count =0;
        for (int j = 1; j <= b; j++){
            if(i%2!=0){
                cout << "#";
            }
            if(i%2==0){
                if(v[i]==0){
                    cout << "#";
                }
                
                else {
                    cout << ".";
                }
                
                // count++;
            }
        }

        cout << endl;
        
    }
    
    
    return 0;
}