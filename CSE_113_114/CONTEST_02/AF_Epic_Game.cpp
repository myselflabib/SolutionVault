#include <iostream>
using namespace std;

int gcd(int a, int b){
    while(b){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    int a, b, n;
    cin >> a >> b >> n;
    bool turnSimon = true;

    while(true){
        if(turnSimon){
            int take = gcd(a, n);
            if(take > n){
                cout << "1\n"; 
                break;
            }
            n -= take;
        } else {
            int take = gcd(b, n);
            if(take > n){
                cout << "0\n"; 
                break;
            }
            n -= take;
        }
        turnSimon = !turnSimon;
    }
    return 0;
}
