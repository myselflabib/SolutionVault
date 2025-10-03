#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    while(cin >> N) {
        vector<int> prices(N);
        for(int i=0; i<N; i++) cin >> prices[i];
        int M;
        cin >> M;

        sort(prices.begin(), prices.end());

        int left = 0, right = N-1;
        int book1 = 0, book2 = 0;
        int minDiff = INT_MAX;

        while(left < right) {
            int sum = prices[left] + prices[right];
            if(sum == M) {
                if(prices[right] - prices[left] < minDiff) {
                    book1 = prices[left];
                    book2 = prices[right];
                    minDiff = prices[right] - prices[left];
                }
                left++;
                right--;
            } else if(sum < M) {
                left++;
            } else {
                right--;
            }
        }

        cout << "Peter should buy books whose prices are " << book1 << " and " << book2 << "." << endl << endl;
    }
    return 0;
}
