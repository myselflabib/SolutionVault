#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int zero = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if(s == "++X"){
            ++zero;
        }
        else if(s == "--X"){
            --zero;
        }
        else if(s == "X++"){
            zero++;
        }
        else if(s == "X--"){
            zero--;
        }
    }
    cout << zero << endl;
    
    return 0;
}