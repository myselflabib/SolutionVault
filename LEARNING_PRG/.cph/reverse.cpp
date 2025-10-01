#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    s= to_string(n);
    //  while(n!=0){
    //     temp = temp*10 + n%10;
    //     n=n/10; 
    //  }
    reverse(s.begin(), s.end());
    int temp = stoi(s);
    cout << temp << endl;  
    return 0;
}