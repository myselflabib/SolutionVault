#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define fast 
#define endl '\n'
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define F first
#define S second


template<typename T>
void print(T x){ cout << x << endl; }

const ll MOD = 1e9+7;
const double PI = acos(-1);

void solve() {
    int n;
    cin >> n;

    int v[n][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> v[i][j];
        }
        
    }

    

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if(v[i][j]>.000001){

            }
        }
        
    }
    

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout<<  v[i][j] << " ";
    //     }
    //     cout << endl;
        
    // }
    
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); 
    cout.tie(0);

    int t;
    cin >> t;  
    while(t--){ 
        solve();
    }
    return 0;
}