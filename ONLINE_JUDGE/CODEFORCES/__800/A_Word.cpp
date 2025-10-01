#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    int uCount = 0, lCount = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] < 'a'){
            uCount++;
        }
        else{
            lCount++;
        }
    }
    if(uCount < lCount || uCount==lCount){
        transform(s.begin(), s.end(), s.begin(), :: tolower);
        
    }
    else{
        transform(s.begin(), s.end(), s.begin(), :: toupper);
    }

    
    cout << s << endl;
    return 0;
}