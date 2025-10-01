#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, num;
    cin >> n;
    while (n--)
    {
        cin >> num; 
        if (num%4!=0)
        {
            cout << "Alice" << endl;
        }
        else{
            cout<< "Bob"<< endl;
        }
    }
    
    return 0;
}