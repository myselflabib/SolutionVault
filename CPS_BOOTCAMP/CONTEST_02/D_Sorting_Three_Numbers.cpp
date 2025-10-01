#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int max = a;
    if(max < b){
        max = b;
    }
    if(max < c){
        max = c;
    }

    int s_max, min;
    if(a == max){
        if(b>c){
            s_max = b;
            min = c;
        }
        else{
            s_max = c;
            min = b;
        }
    }
    else if(b == max){
        if(a>c){
            s_max = a;
            min = c;
        }
        else{
            s_max = c;
            min = a;
        }
    }
    else if(c == max){
        if(a>b){
            s_max = a;
            min = b;
        }
        else{
            s_max = b;
            min = a;
        }
    }
    cout << min << " " << s_max << " " << max << endl;
    return 0;
}