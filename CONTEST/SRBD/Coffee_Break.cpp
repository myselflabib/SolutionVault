#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int h, m;   
        char c;
        cin >> h >> c >> m;

        if(h > 22 || (h == 22 && m > 22)){
            cout << "00:00\n";
        }
        
        else if(h > 11 || (h == 11 && m > 11)){
            cout << "22:22\n";
        }
        
        else if(h > 0 || m > 0){
            cout << "11:11\n";
        }
        
        else{
            cout << "00:00\n";
        }
    }




    return 0;
}