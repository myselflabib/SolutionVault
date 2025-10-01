#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    queue<char> qu;
    while(t--){
        string s;
        cin >> s;

        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (!st.empty() && st.top() == '0' && s[i]== '1'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        
        if(st.empty()){
            cout << "YES" << endl;
        }

        else{
            cout << "NO" << endl;
        }
        
    }
    return 0;
}