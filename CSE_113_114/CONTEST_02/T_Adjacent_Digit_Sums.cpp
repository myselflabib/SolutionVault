#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        if(y == 1 && x % 9 == 0) cout << "Yes\n";
        else if(y == x + 1) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
