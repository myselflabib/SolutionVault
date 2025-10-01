#include <bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;

       
        int top = 1, north = 2, west = 3;
        int bottom = 6;
        int south = 5;
        int east = 4;

        for (int i = 0; i < n; i++) {
            string diceRoll;
            cin >> diceRoll;

            if (diceRoll == "north") {
                int temp = top;
                top = south;
                south = bottom;
                bottom = north;
                north = temp;
            } 
            
            else if (diceRoll == "south") {
                int temp = top;
                top = north;
                north = bottom;
                bottom = south;
                south = temp;
            } 
            
            else if (diceRoll == "east") {
                int temp = top;
                top = west;
                west = bottom;
                bottom = east;
                east = temp;
            }
            
            
            else if (diceRoll == "west") {
                int temp = top;
                top = east;
                east = bottom;
                bottom = west;
                west = temp;
            }
        }

        cout << top << endl;
    }

    return 0;
}
