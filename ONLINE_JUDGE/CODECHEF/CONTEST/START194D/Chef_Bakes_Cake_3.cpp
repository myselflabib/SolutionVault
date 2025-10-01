#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 
    while (T--) {
        int N;
        cin >> N; 

        int A[100]; 
        for (int i = 0; i < N; i++) {
            cin >> A[i]; 

        int Mp = 0;

        for (int X = 0; X <= 100; X++) {
            int total = 0;

            for (int i = 0; i < N; i++) {
                if (A[i] < X)
                    total += A[i];
                else
                    total += X;
            }

            
            int income = total*50;
            int cost = X*30*N;
            int profit = income-cost;

            if (profit > Mp) {
                Mp = profit;
            }
        }

        cout << Mp << endl;
    }

    return 0;
}
