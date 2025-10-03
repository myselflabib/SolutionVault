#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> scores(n);
    for(int i = 0; i < n; i++) cin >> scores[i];

    int amazing = 0;
    int maxi = scores[0];
    int mini = scores[0];

    for(int i = 1; i < n; i++){
        if(scores[i] > maxi){
            amazing++;
            maxi = scores[i];
        } else if(scores[i] < mini){
            amazing++;
            mini = scores[i];
        }
    }

    cout << amazing << endl;
    return 0;
}
