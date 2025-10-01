#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore(); // newline after N

    while(N--) {
        string line;
        getline(cin, line); // একটি test case নেওয়া
        stringstream ss(line);
        vector<int> nums;
        int x;
        while(ss >> x) nums.push_back(x);

        int maxGCD = 0;
        int M = nums.size();
        for(int i = 0; i < M; i++) {
            for(int j = i+1; j < M; j++) {
                int a = nums[i], b = nums[j];
                
                // Euclidean Algorithm দিয়ে GCD
                while(b != 0) {
                    int temp = b;
                    b = a % b;
                    a = temp;
                }

                if(a > maxGCD) maxGCD = a;
            }
        }

        cout << maxGCD << endl;
    }

    return 0;
}
