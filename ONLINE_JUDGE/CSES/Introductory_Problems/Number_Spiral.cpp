#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin >> t;
    long long int y, x;
    while (t--)
    {
        cin >> y>> x;
        long long int n = max(x, y), value;
        if (n%2==0)
        {
            if(y>=x){
                value = (y*y)-x+1;
            }
            else if(x>y){
                value=(x-1)*(x-1)+y;
            }
        }
        else{
            if(x>=y){
                value = (x*x)-y+1;
            }
            else if(y>x){
                value = (y-1)*(y-1)+x;
            }
        }
        cout << value << endl;
        


    }
    
    
    return 0;
}