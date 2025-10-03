#include <iostream>
using namespace std;

int countDistinctPrimeFactors(int x) {
    int count = 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            count++;
            while (x % i == 0) x /= i;
        }
    }
    if (x > 1) count++; 
    return count;
}

int main() {
    int T;
    cin >> T;
    int queries[20];
    int maxQuery = 0;

    for (int i = 0; i < T; i++) {
        cin >> queries[i];
        if (queries[i] > maxQuery) maxQuery = queries[i];
    }

    int lucky[1000];
    int numLucky = 0;
    int num = 2;
    while (numLucky < maxQuery) {
        if (countDistinctPrimeFactors(num) >= 3) {
            lucky[numLucky] = num;
            numLucky++;
        }
        num++;
    }

    for (int i = 0; i < T; i++) {
        cout << lucky[queries[i] - 1] << "\n";
    }

    return 0;
}
