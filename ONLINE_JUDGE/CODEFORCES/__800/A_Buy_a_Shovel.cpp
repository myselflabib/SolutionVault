#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int count = 0;
    int cost = 0;
    
    while(1){
        
        cost+=x;
        if(cost%10==0 || cost%10==y){
            count++;
            break;
        }
        else count++;
        
    }

    cout << count << endl;
    return 0;
}