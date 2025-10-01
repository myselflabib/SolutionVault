#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while (n--)
    {
        string wrd;
        cin >> wrd;
        

        if(wrd.length()>10){
            cout << wrd[0] << wrd.length()-2 << wrd[wrd.length()-1] << endl;
        }
        else{
            cout << wrd << endl;
        }
    }
    
    return 0;
}