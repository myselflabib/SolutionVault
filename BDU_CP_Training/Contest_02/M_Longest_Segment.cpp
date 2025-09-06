#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    double max_num =0;
    while (n--)
    {
        double a, b;
        cin >> a >> b;

        double num = sqrt((1.0*a*a) + (1.0*b*b)); 
        if(max_num < num){
            max_num = num;
        }
    }

    cout <<fixed << setprecision(10) << max_num << endl;
    
    return 0;
}