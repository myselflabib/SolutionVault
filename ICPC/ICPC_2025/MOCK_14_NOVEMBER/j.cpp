#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        double x;
        cin >>x;

        if(x>=0 && x<=7500){
            cout << fixed << setprecision(2) << (x/.2)+12500 << endl;
        }
        else if(x>7500 && x<=40000){
            if(x<=20000){
                x-=7500;
                cout << fixed << setprecision(2) << (x/.4)+50000 << endl;
            }
            else if(x>20000){
                x-=20000;
                cout << (x/.4);
            }
        }

        else if(x>40000){
            
            x-=40000;
            cout << fixed << setprecision(2) << (x/.45)+150000 << endl;
        }
    }
    return 0;
}