#include<bits/stdc++.h>
using namespace std;
int *p;
void fun(){
    int *x = new int;
    *x = 10;
    p = x;
    cout << "Fun -> " << *p << endl;
}
int main(){
    fun();
    cout << "Main -> " << *p << endl;
    return 0;
}