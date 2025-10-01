#include <iostream>
using namespace std;

int main()
{
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;



    bool isPrefix = true;
    bool isSuffix = true;

    for (int i = 0; i < n; i++){
        if (s[i] != t[i])

        isPrefix = false;
    }

    for (int i = 0; i < n; i++){
        if (s[i] != t[m - n + i])
        isSuffix = false;
    }

    if (isPrefix && isSuffix){
        cout << 0 << endl;
    }
    
    
    else if (isPrefix){
        cout << 1 << endl;
    }

    else if (isSuffix){
        cout << 2 << endl;
    }
    
    else{

        cout << 3 << endl;
    }

    return 0;
}
