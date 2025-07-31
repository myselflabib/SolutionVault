#include<bits/stdc++.h>
using namespace std;

int main(){
    char s1[100000], s2[100000];
    cin >> s1 >> s2;
    for (int i = 0; s1[i]; i++)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
    
    int flag = strcmp(s1, s2);
    if(flag == 0){
        cout << "0" << endl;
    }
    else if(flag < 0){
        cout << "-1" << endl;
    }
    else{
        cout << "1" << endl;
    }
    
    
    return 0;
}