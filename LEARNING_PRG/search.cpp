#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    

    int value;
    cin >> value;

    bool exist=  false;
    int index = 0;
    for (int i = 0; i < 6; i++)
    {
        if(a[i]==value){
        exist = true;
        }
        index = i;
    }
    if(exist){
            cout << "The number is in " << index <<"th index." << endl;
        }
    else{
        cout << "The value isnot in the array" << endl;
            
        }
    
    return 0;
}