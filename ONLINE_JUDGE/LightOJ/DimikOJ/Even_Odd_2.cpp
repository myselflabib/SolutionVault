#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string num;
    cin >> n;
    while (n--)
    {
        cin >> num;
        char lastDigit = num.back();

        if (lastDigit == '0' || lastDigit == '2' || lastDigit == '4' || 
            lastDigit == '6' || lastDigit == '8')
        {
            cout << "even" << endl;
        }
        else{
            cout << "odd" << endl;
        }
    }
    
    return 0;
}