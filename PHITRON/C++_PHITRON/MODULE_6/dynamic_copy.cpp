#include<bits/stdc++.h>
using namespace std;

class cricketer{
    public:
    int jercy;
    string country;

    cricketer(string country, int jercy){
        this->country = country;
        this->jercy = jercy;
    }
};
int main(){
    cricketer *dhoni = new cricketer("india", 100);
    cricketer *kholi = new cricketer("india", 18);
    *kholi = *dhoni;
    delete dhoni;
    cout << dhoni->country << " " << dhoni->jercy <<endl;
    cout << kholi->country << " " << kholi->jercy <<endl;
    return 0;
}