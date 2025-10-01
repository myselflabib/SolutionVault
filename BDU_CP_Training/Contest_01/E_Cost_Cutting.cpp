#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int a, b, c;
        cin >> a >> b >> c;

        int min = a;
        if(min>b){
            min = b;
        }
        if(min>c){
            min = c;
        }

        int max = a;
        if(max<b){
            max = b;
        }
        if(max<c){
            max = c;
        }

        int mid;
        mid = (a+b+c)-(min+max);

        cout << "Case " << i << ": " << mid << endl;
        
    }
    return 0;
}