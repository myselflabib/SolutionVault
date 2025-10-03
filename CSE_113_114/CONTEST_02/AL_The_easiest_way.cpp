#include <iostream>
using namespace std;

int main() {
    int N;
    int caseNum = 1;

    while (cin >> N && N != 0) {
        int maxSize = 0;
        int answer = 1;
        for (int i = 1; i <= N; i++) {
            int w, h;
            cin >> w >> h;
            int size = (w < h) ? w : h; 
            if (size > maxSize) {
                maxSize = size;
                answer = i; 
            }
        }
        cout << answer << "\n";
    }

    return 0;
}
