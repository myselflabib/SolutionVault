#include <bits/stdc++.h>
using namespace std;

bool CheckUniq(string s){
    int i = 0, j=3;

    
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i+1; j < s.size(); j++)
        {
            if(s[i] == s[j]) return false;
        }
        
    }
    
    return true;

    
}

int main()
{
    int y;
    cin >> y;
    y++;


    while(1){
        string s = to_string(y);

        bool uniq = CheckUniq(s);
        if(uniq){
            cout << stoi(s) << endl;
            break;
            
        }
        else{
            y = stoi(s);
            y++;
        }
    }
    
    return 0;
}