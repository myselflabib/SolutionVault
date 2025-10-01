#include <bits/stdc++.h>
using namespace std;

// Function to calculate sum of digits
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}


int main() {
    int K;
    cin >> K;

    int start = 1;
    for (int i = 1; i < K; i++) {
        start *= 10; 
    }
    int end = start * 10 - 1; 
    
    int count = 0;

    for (int A = start; A <= end; A++) {
        for (int B = start; B <= end; B++) {
            if (digitSum(A + B) == digitSum(A) + digitSum(B)) {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}