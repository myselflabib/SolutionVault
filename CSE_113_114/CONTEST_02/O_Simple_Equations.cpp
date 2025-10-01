#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    while(N--) {
        int A, B, C;
        cin >> A >> B >> C;

        bool found = false;
        int bestX = 10001, bestY = 10001, bestZ = 10001;

        for(int x = -100; x <= 100; x++) {
            for(int y = -100; y <= 100; y++) {
                if(y == x) continue;
                int z = A - x - y;
                if(z == x || z == y) continue;
                if(x * y * z == B && x*x + y*y + z*z == C) {
                    
                    if(x < bestX || (x == bestX && y < bestY)) {
                        bestX = x;
                        bestY = y;
                        bestZ = z;
                        found = true;
                    }
                }
            }
        }

        if(found)
            cout << bestX << " " << bestY << " " << bestZ << endl;
        else
            cout << "No solution." << endl;
    }

    return 0;
}
