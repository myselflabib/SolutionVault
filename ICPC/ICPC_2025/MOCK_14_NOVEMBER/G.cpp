#include <iostream>
#include <string>

using namespace std;

int strLength(string s){
    int length = 0;
    for (int i = 0; i < s.size(); i++)
    {
        
        if(s[i] == '\\' && i+1 < s.size() && s[i+1] == '0') {
            break;
        }
        length++;
    }
    return length;
    
}

int strSize(string s){
    // int Size = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     Size++;
    // }
    return s.size();
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while(t--){
        string s;
        getline(cin, s);

        cout << strSize(s) << " " << strLength(s) << endl;
    }
    return 0;
}