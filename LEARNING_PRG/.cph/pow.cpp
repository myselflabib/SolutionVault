#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    int flag =0;
    for (int i = 0; i <= x; i++)
    {
        if(pow(x, i)==y){
            flag =1;
            break;
        }
    }
    if(flag){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
    return 0;
}