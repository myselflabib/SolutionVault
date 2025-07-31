#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    int sum1 = 0, sum2 = 0, count=0;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
        sum1+=v[i];
    }
    sum1/=2;
    sort(v.begin(), v.end());
    for (int j = n-1; j >= 0; j--)
    {
        sum2+=v[j];
        count++;
        if(sum2>sum1) break;
    }

    cout << count << endl;
    
    
    return 0;
}